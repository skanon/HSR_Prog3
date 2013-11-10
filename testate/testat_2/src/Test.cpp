#include "kwic.h"
#include "word.h"
#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
#include "word.h"

void TestStringConstructor() {
	Word w{"hello"};
	ASSERT_EQUAL("hello", w);
}

void runAllTests(int argc, char const *argv[]){
	cute::suite s;
	//TODO add your test here
	s.push_back(CUTE(TestStringConstructor));
	cute::xml_file_opener xmlfile(argc,argv);
	cute::xml_listener<cute::ide_listener<> >  lis(xmlfile.out);
	cute::makeRunner(lis,argc,argv)(s, "AllTests");
}


int main(int argc, char const *argv[]){
    runAllTests(argc,argv);

    return 0;

}



