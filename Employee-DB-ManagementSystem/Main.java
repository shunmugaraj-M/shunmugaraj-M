
//package Employee;
import java.util.*;
public class Main{
 public static Scanner sc= new Scanner(System.in);
 public static ArrayList<Employee> e = new ArrayList<Employee>();
 public static EmployeeList list;
 public static void main(String[] args) {
  // TODO Auto-generated method stub
  boolean quit=false;

  e.add(new Employee(1,"ram",45,"Management","CEO",""));
  e.add(new Employee(2,"raja",42,"HR","HR Manager","ram"));
  e.add(new Employee(3,"Sebastian",38,"Finance","Finance Manager","ram"));
  e.add(new Employee(4,"Aashritha",32,"Product Management","Dev Manager","ram"));
  e.add(new Employee(5,"irfan",35,"HR","HR Lead","raja"));
  e.add(new Employee(6,"Anjali Kumar",29,"HR","HR Associate","irfan"));
  e.add(new Employee(7,"Joseph",40,"Finance","Finance Associate","Sebastian"));
  e.add(new Employee(8,"arun",27,"Product Development","Tech Lead","Aashritha"));
  e.add(new Employee(9,"Abhinaya",23,"Product Development","System Developer","arun"));
  e.add(new Employee(10,"kumar",28,"Product Testing","QA Lead","arun"));
  
  list = new EmployeeList(e);
  while(!quit) {
   System.out.println("Press 1 to display employee detatils\nPress 2 to search employee\nPress 3 to quit");
   int choice=sc.nextInt();
   switch(choice) {
   case 1:
    printDetails();
    break;
   case 2:
    search();
    break;
   case 3:
    quit=true;
    break;
   }
  }
 }
 public static void printDetails() {
  System.out.println("ID Name Age Department "
    + "Designation Reporting To");
  for(Employee a: e) {
   print(a);
   System.out.println();
  }
 }
 public static void space(int n) {
  int a=20-n;
  for(int i=0;i<a;i++) {
   System.out.print(" ");
  }
 }
 public static void print(Employee e) {
  System.out.print(e.getId()+" ");
  System.out.print(e.getName());
  space(e.getName().length());
  System.out.print(e.getAge()+" ");
  System.out.print(e.getDepartment());
  space(e.getDepartment().length());
  System.out.print(e.getDesignation());
  space(e.getDesignation().length());
  System.out.print(e.getReportingTo());
 }
 public static void search() {
  System.out.println("Press 1 to search by name\nPress 2 to search by id\nPress 3 to search by age\nPress 4 search by department\nPress 5 to search by designation\nPress 6 to search by reportingTo");
  int c=sc.nextInt();
  sc.nextLine();
  switch(c) {
  case 1:
   System.out.println("Enter your sweet name:");
   String name=sc.nextLine();
    

   Employee emp=list.find(name);
   if(emp!=null) {
    System.out.println(emp);
   }else {
    System.out.println("Employee "+name+" is not found in the database");
   }
   break;
  case 2:
   System.out.println("Enter id:");
   int id=sc.nextInt();
   sc.nextLine();
   Employee ab= list.find(id);
   if(ab!=null) {
    System.out.println(ab);
   }else {
    System.out.println("Employee "+id+" is not found in the database");
   }
   break;
  case 3:
   System.out.println("Enter age:");
   int age=sc.nextInt();
   System.out.println("Press any of the options given below\n=\n>\n>=\n<\n<=\n!=");
   String choice=sc.next();
   sc.nextLine();
   switch(choice) {
   case "=":
    ArrayList<Employee> eq=list.findAgeEqual(age);
    if(eq!=null) {
     System.out.println("List of Employees:\n");
     for(Employee e: eq) {
      System.out.println(e);
     }
    }else {
     System.out.println("No employee found");
    }
    break;
   case ">":
    ArrayList<Employee> gr=list.findAgeGreater(age);
    if(gr!=null) {
     System.out.println("List of Employees:\n");
     for(Employee e: gr) {
      System.out.println(e);
     }
    }else {
     System.out.println("No employee found");
    }
    break;
   case ">=":
    ArrayList<Employee> gte=list.findAgeGreaterThanEqual(age);
    if(gte!=null) {
     System.out.println("List of Employees:\n");
     for(Employee e: gte) {
      System.out.println(e);
     }
    }else {
     System.out.println("No employee found");
    }
    break;
   case "<":
    ArrayList<Employee> lr=list.findAgeLesser(age);
    if(lr!=null) {
     System.out.println("List of Employees:\n");
     for(Employee e: lr) {
      System.out.println(e);
     }
    }else {
     System.out.println("No employee found");
    }
    break;
   case "<=":
    ArrayList<Employee> lte=list.findAgeLesserThanEqual(age);
    if(lte!=null) {
     System.out.println("List of Employees:\n");
     for(Employee e: lte) {
      System.out.println(e);
     }
    }else {
     System.out.println("No employee found");
    }
    break;
   case "!=":
    ArrayList<Employee> ne=list.findAgeNotEqual(age);
    if(ne!=null) {
     System.out.println("List of Employees:\n");
     for(Employee e: ne) {
      System.out.println(e);
     }
    }else {
     System.out.println("No employee found");
    }
    break;
   }
   break;
  case 4:
   System.out.println("Enter department:");
   String dept=sc.nextLine();
   ArrayList<Employee> department=list.findDept(dept);
   if(department!=null) {
    for(Employee e: department) {
     System.out.println(e);
    }
   }else {
    System.out.println("No employee found");
   }
   break;
  case 5:
   System.out.println("Enter designation:");
   String des=sc.nextLine();
   ArrayList<Employee> designation=list.findDes(des);
   if(designation!=null) {
    for(Employee e: designation) {
     System.out.println(e);
    }
   }else {
    System.out.println("No employee found");
   }
   break;
  case 6:
   System.out.println("Enter Reporting To:");
   String abc=sc.nextLine();
   ArrayList<Employee> reportingTo=list.findReportingTo(abc);
   if(reportingTo!=null) {
    for(Employee e: reportingTo) {
     System.out.println(e);
    }
   }else {
    System.out.println("No employee found");
   }
   break;
  }
 }

}



 