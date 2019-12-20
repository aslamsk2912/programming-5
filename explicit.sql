DECLARE  
   c_id customer.custid%type;  
   c_name customer.cname%type;  
   c_city customer.city%type;  
   CURSOR c_customer is  
      SELECT custid, cname, city FROM customer;  
BEGIN  
   OPEN c_customer;  
   LOOP  
      FETCH c_customer into c_id, c_name, c_city;  
      EXIT WHEN c_customer%notfound;  
      dbms_output.put_line(c_id || ' ' || c_name || ' ' || c_city);  
   END LOOP;  
   CLOSE c_customer;  
END;  
/  
