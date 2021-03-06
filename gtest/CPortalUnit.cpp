/**
* Copyright (c) 2015, 爱wifi（版权声明）
*
* @file xxxxxxx
* @brief 文件的简单介绍
*
* 文件的详细介绍
*
* @author: yuhaiyang
* @date: 2016/4/13
*/

#include "CPortalUnit.h"


void CPortalUnit::SetUpTestCase()
{
    std::cout << "开始进行认证测试" << std::endl;
}

void CPortalUnit::TearDownTestCase()
{
    std::cout << "结束认证测试" << std::endl;
}

/*
TEST_F( CPortalUnit,login_Ok )
{
    std::cout << "是否进行 login 测试" << std::endl;
    char ch = getchar();
    if( ch != 'y' && ch != 'Y' )
    {
        return;
    }
    getchar();

    CPortal portal( EPORTAL_VER::VER1 );
    Poco::Net::SocketAddress nasAddr( "192.168.10.99",2000 );
    Poco::Timespan timeout( 7,0 );
    try{
        portal.userAuth("192.168.202.5","test","123456",nasAddr, timeout );
    }catch( Taiji::ExceptPortal& e )
    {
        std::cerr << "!!!!!!!!!" << e.getErrInfo() << "!!!!!!!!!!" << std::endl;
    }
}



TEST_F( CPortalUnit,logout_Ok )
{
    std::cout << "是否进行 logout 测试" << std::endl;
    char ch = getchar();
    if( ch != 'y' && ch != 'Y' )
    {
        return;
    }
    getchar();

    CPortal portal( EPORTAL_VER::VER1 );
    Poco::Net::SocketAddress nasAddr( "192.168.4.113",2000 );
    Poco::Timespan timeout( 5,0 );
    try{
//        portal.userLogout("172.168.2.11",nasAddr, timeout );
        portal.userLogout("172.168.2.12",nasAddr, timeout );
    }catch( Taiji::ExceptPortal& e )
    {
        std::cerr << "!!!!!!!!!" << e.getErrInfo() << "!!!!!!!!!!" << std::endl;
    }
}

*/

TEST_F( CPortalUnit,login_Ok_v2 )
{
    std::cout << "是否进行 login v2 测试" << std::endl;
    char ch = getchar();
    getchar();
    if( ch != 'y' && ch != 'Y' )
    {
        return;
    }


    CPortal portal( EPORTAL_VER::VER2,"123portal" );
    Poco::Net::SocketAddress nasAddr( "192.168.10.99",2000 );
    Poco::Timespan timeout( 5,0 );
    try{
        portal.userAuth("192.168.202.5","test","123456",nasAddr, timeout );
    }catch( Taiji::ExceptPortal& e )
    {
        std::cerr << "!!!!!!!!!" << e.getErrInfo() << "!!!!!!!!!!" << std::endl;
    }
}


TEST_F( CPortalUnit,logout_Ok_v2 )
{
    std::cout << "是否进行 logout v2 测试" << std::endl;
    char ch = getchar();
    getchar();
    if( ch != 'y' && ch != 'Y' )
    {
        return;
    }

    CPortal portal( EPORTAL_VER::VER2, "123portal" );
    Poco::Net::SocketAddress nasAddr( "192.168.4.113",2000 );
    Poco::Timespan timeout( 5,0 );
    try{
       // portal.userLogout("172.168.2.27",nasAddr, timeout );
        std::cout << "userLogout test begin:" << std::endl;
	portal.userLogout("172.168.2.65",nasAddr, timeout );
    }catch( Taiji::ExceptPortal& e )
    {
        std::cerr << "!!!!!!!!!" << e.getErrInfo() << "!!!!!!!!!!" << std::endl;
    }
}

