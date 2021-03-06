// -*- C++ -*-
/*!
 * @file   MonitoringServantTests.cpp
 * @brief  MonitoringServant test class
 * @date   $Date$ 
 * @author Noriaki Ando <n-ando@aist.go.jp>
 *
 * $Id$ 
 *
 */

/*
 * $Log$
 *
 */

#ifndef MonitoringServant_cpp
#define MonitoringServant_cpp

#include <iostream>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestAssert.h>
#include <doil/ImplBase.h>

/*!
 * @class MonitoringServant Local Implementation class.
 * @brief MonitoringServant test.
 */

/*!
 * @class MonitoringServantTests class
 * @brief MonitoringServant test
 */
namespace MonitoringServant
{
  class MonitoringServantTests
   : public CppUnit::TestFixture
  {
    CPPUNIT_TEST_SUITE(MonitoringServantTests);
    CPPUNIT_TEST(test_case0);
    CPPUNIT_TEST_SUITE_END();
  
  private:
  
  public:
  
    /*!
     * @brief Constructor
     */
    MonitoringServantTests()
    {
    }
    
    /*!
     * @brief Destructor
     */
    ~MonitoringServantTests()
    {
    }
  
    /*!
     * @brief Test initialization
     */
    virtual void setUp()
    {
    }
    
    /*!
     * @brief Test finalization
     */
    virtual void tearDown()
    { 
    }
  
    /* test case */
    void test_case0()
    {
      CPPUNIT_FAIL("Automatic failue.");
    }
  };
}; // namespace MonitoringServant

/*
 * Register test suite
 */
CPPUNIT_TEST_SUITE_REGISTRATION(MonitoringServant::MonitoringServantTests);

#ifdef LOCAL_MAIN
int main(int argc, char* argv[])
{
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(CppUnit::TestFactoryRegistry::getRegistry().makeTest());
    CppUnit::Outputter* outputter = 
      new CppUnit::TextOutputter(&runner.result(), std::cout);
    runner.setOutputter(outputter);
    bool retcode = runner.run();
    return !retcode;
}
#endif // MAIN
#endif // MonitoringServant_cpp
