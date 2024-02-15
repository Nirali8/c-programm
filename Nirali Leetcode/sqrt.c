int mySqrt(int num)
 {
    int sqrt, temp;  
    sqrt = num / 2;  
    temp = 0;  
      
    // use while loop to continuously checks the sqrt is not equal to the temp  
    while (sqrt != temp) // Initially temp is 0 and sqrt = num  
    {  
        temp = sqrt; // assign sqrt to temp  
          
        sqrt = ( num / temp + temp) / 2;  
     }   
       
    return sqrt;
}