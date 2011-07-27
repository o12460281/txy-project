
#function
      hello.h
        #include <stdio.h>
        void say_three_hi();

      main.c
        #include <stdio.h>
 
        int main(int argc, char const* argv[])
        {      
            say_three_hi();    
            return 0;
        }
  
      hello.c
        #include "hello.h"
        void say_three_hi()
            {
                int i;
                for (i = 0; i < 3; i++)
                {
                    printf("hello everyone!\n");
                }
            }
