using System;

class MainClass {

  public static string FirstReverse(string str) {

    char[] stringArray = str.ToCharArray();

    string reverse = String.Empty;

    for (int i = stringArray.Length - 1; i >= 0; i--)
    {
        reverse += stringArray[i];
    }
    return reverse;
  }

  static void Main() {  

    // keep this function call here
    Console.WriteLine(FirstReverse(Console.ReadLine()));
    
  } 

}