// Create a my_string_index function which takes 2 parameters (haystack and needle) and 
// locates the first occurrence of the character needle in the string haystack and returns the position.

// You can think of this function as: is there an L (character) in my string "helLo"?

// The objective is to build a loop that has an if statement which returns the characters position
//  when it matches the right character.

int my_string_index(char* param_1, char param_2)
{
  
  int index = 0;
  while (*param_1 != '\0') {
    if(*param_1 == param_2){
     return index;
    }else{
        index++;
        param_1++;
    }
     
  }
  return -1;
}
