import java.util.* ;

class u11278_1
{	
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);

		do
		{
			String text = input.nextLine();			
			System.out.println(view_as_DvorakKeyboardLayout(text));

		}while(input.hasNext());
	}	
	public static String view_as_DvorakKeyboardLayout(String text)
	{
		int len = text.length();
		char[] textChars = text.toCharArray();
		for(int i=0; i<len; i++)
		{						
			textChars[i] = convert_as_DvorakKeyboardLayout(textChars[i]);
		}
		return String.valueOf(textChars);
	}
	public static char convert_as_DvorakKeyboardLayout(char c)
	{
		switch(c)
		{
			case '4': return 'q';
			case '5': return 'j';
			case '6': return 'l';
			case '7': return 'm';
			case '8': return 'f';
			case '9': return 'p';
			case '0': return '/';
			case '-': return '[';
			case '=': return ']';
			case 'q': return '4';
			case 'w': return '5';
			case 'e': return '6';
			case 'r': return '.';
			case 't': return 'o';
			case 'y': return 'r';
			case 'u': return 's';
			case 'i': return 'u';
			case 'o': return 'y';
			case 'p': return 'b';
			case '[': return ';';
			case ']': return '=';//bug
			case 'a': return '7';
			case 's': return '8';
			case 'd': return '9';			
			case 'f': return 'a';
			case 'g': return 'e';
			case 'j': return 't';
			case 'k': return 'd';
			case 'l': return 'c';
			case ';': return 'k';
			case 39 : return '-'; //'
			case 'z': return '0';
			case 'x': return 'z';
			case 'c': return 'x';
			case 'v': return ',';
			case 'b': return 'i';
			case 'm': return 'w';
			case ',': return 'v';
			case '.': return 'g';
			case '/': return 39 ;//'

			case '$': return 'Q';
			case '%': return 'J';
			case '^': return 'L';
			case '&': return 'M';
			case '*': return 'F';
			case '(': return 'P';
			case ')': return '?';
			case '_': return '{';
			case '+': return '}';
			case 'Q': return '$';
			case 'W': return '%';
			case 'E': return '^';
			case 'R': return '>';
			case 'T': return 'O';
			case 'Y': return 'R';
			case 'U': return 'S';
			case 'I': return 'U';
			case 'O': return 'Y';
			case 'P': return 'B';
			case '{': return ':';
			case '}': return '+';
			case 'A': return '&';
			case 'S': return '*';
			case 'D': return '(';
			case 'F': return 'A';
			case 'G': return 'E';
			case 'J': return 'T';
			case 'K': return 'D';
			case 'L': return 'C';
			case ':': return 'K';
			case '"': return '_';
			case 'Z': return ')';
			case 'X': return 'Z';
			case 'C': return 'X';
			case 'V': return '<';
			case 'B': return 'I';
			case 'M': return 'W';
			case '<': return 'V';
			case '>': return 'G';
			case '?': return '"';
		}

		return c;
	}
}