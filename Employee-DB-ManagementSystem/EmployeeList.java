//package Employee;
import java.util.*;
public class EmployeeList {
 private ArrayList<Employee> a=new ArrayList<Employee>();
 public EmployeeList(ArrayList<Employee> arr) {
  a.addAll(arr);
 }
	
 public Employee find(String name) {
  for(Employee e: a) {
   if(e.getName().equalsIgnoreCase(name)) {
    return e;
   }
  }
  return null;
 }
 public Employee find(int id) {
  for(Employee e: a) {
   if(e.getId()==id) {
    return e;
   }
  }
  return null;
 }
 public ArrayList<Employee> findDept(String dept){
  ArrayList<Employee> em=new ArrayList<Employee>();
  for(Employee e: a) {
   if(e.getDepartment().equals(dept)) {
    em.add(e);
   }
  }
  if(em.isEmpty()) {
   return null;
  }
  return em;
 }
 public ArrayList<Employee> findDes(String des){
  ArrayList<Employee> em=new ArrayList<Employee>();
  for(Employee e: a) {
   if(e.getDesignation().equals(des)) {
    em.add(e);
   }
  }
  if(em.isEmpty()) {
   return null;
  }
  return em;
 }
 public ArrayList<Employee> findReportingTo(String rep){
  ArrayList<Employee> em=new ArrayList<Employee>();
  for(Employee e: a) {
   if(e.getReportingTo().equals(rep)) {
    em.add(e);
   }
  }
  if(em.isEmpty()) {
   return null;
  }
  return em;
 }
 public ArrayList<Employee> findAgeEqual(int age){
  ArrayList<Employee> em=new ArrayList<Employee>();
  for(Employee e:a) {
   if(e.getAge()==age) {
    em.add(e);
   }
  }
  if(em.isEmpty()) {
   return null;
  }
  return em;
 }
 public ArrayList<Employee> findAgeNotEqual(int age){
  ArrayList<Employee> em=new ArrayList<Employee>();
  for(Employee e:a) {
   if(e.getAge()!=age) {
    em.add(e);
   }
  }
  if(em.isEmpty()) {
   return null;
  }
  return em;
 }
 public ArrayList<Employee> findAgeGreater(int age){
  ArrayList<Employee> em=new ArrayList<Employee>();
  for(Employee e:a) {
   if(e.getAge()>age) {
    em.add(e);
   }
  }
  if(em.isEmpty()) {
   return null;
  }
  return em;
 }
 public ArrayList<Employee> findAgeGreaterThanEqual(int age){
  ArrayList<Employee> em=new ArrayList<Employee>();
  for(Employee e:a) {
   if(e.getAge()>=age) {
    em.add(e);
   }
  }
  if(em.isEmpty()) {
   return null;
  }
  return em;
 }
 public ArrayList<Employee> findAgeLesser(int age){
  ArrayList<Employee> em=new ArrayList<Employee>();
  for(Employee e:a) {
   if(e.getAge()<age) {
    em.add(e);
   }
  }
  if(em.isEmpty()) {
   return null;
  }
  return em;
 }
 public ArrayList<Employee> findAgeLesserThanEqual(int age){
  ArrayList<Employee> em=new ArrayList<Employee>();
  for(Employee e:a) {
   if(e.getAge()<=age) {
    em.add(e);
   }
  }
  if(em.isEmpty()) {
   return null;
  }
  return em;
 }
	
}