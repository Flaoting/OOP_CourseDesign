#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Date.h"
<<<<<<< HEAD
#include "People.h"
#include "DEFINE.cpp"
#include "Purpose.h"
#include "Student.h"
#include "Teacher.h"
#include "stdafx.h"
#include "Lesson.h"
<<<<<<< HEAD

=======
#include "FatherTable.h"
#include "BaseFile.h"
#include "PremaryMenu.h"
>>>>>>> dev
=======
#include "PeoNum.h"
#include "AddSTDMenu.h"
#include "OperateSTD.h"
#include "FeasibleCmd.h"
<<<<<<< HEAD

>>>>>>> dev
=======
#include "AddTEAMenu.h"
#include "OperateTEA.h"
>>>>>>> dev
using namespace std;



<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	char name[29] = "laopan";
	People people(name);
	Date t1(2020, 7, 9);
	Date t2(2020, 7, 14);

	Table ttt(&people,t1, t2, 3);
	
	ttt.display();
=======
	/*Date d1(2020, 7, 8);
	char name[29] = "laopan";
	People people(name);
	FatherTable f(&people);
	Table t(&people,d1,3,4);
	f.display();
	t.display();
	BaseFile BF;
	BF.display();
	BF.changeSaveAddress();
	BaseFile AF;
	AF.display();*/
=======
int main() {
>>>>>>> dev
=======
int main() 

{
	FeasibleCmd *FE;
	FE = new FeasibleCmd;
	delete FE;
>>>>>>> dev

	OperateSTD OS;
	
	Student ss;
	
	//OS.getInfoFromScreen();
	//OS.saveThisFile();
	
	OS.readPreFile();
	ss=OS.getStudent();

<<<<<<< HEAD
>>>>>>> dev
=======
	ss.display();
>>>>>>> dev
	return 0;

}