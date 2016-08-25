import java.util.*; 

class u11278_2
{

	static HashMap<String, Integer> map = new HashMap<String, Integer>();
	static char[] standard = "1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:ZXCVBNM<> ".toCharArray();	
	static char[] dvorak   = "123qjlmfp/[]456.orsuyb;=789aehtdck-0zx,inwvg'!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK)ZX<INWVG ".toCharArray();

	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);		
		String text;
		setMap();
		do
		{	
			text = input.nextLine();
			System.out.println(view_as_DvorakKeyboadLayout(text));

		}while(input.hasNext());
	}
	public static char[] view_as_DvorakKeyboadLayout(String text)
	{			
		char[] textChars = text.toCharArray();										
		for(int i=0; i<text.length(); i++)
		{			
			char c = textChars[i];
			if(map.containsKey(c+""))
			{
				textChars[i] = dvorak[map.get(c+"")];
			}
			else if(c=='"')
			{
				textChars[i] = '_';
			}
			else if(c=='?')
			{
				textChars[i] = '"';
			}
		}
		//return String.valueOf(textChars);
		return textChars;
	}
	public static void setMap()
	{				
		for(int i=0 ;i<standard.length; i++)
		{
			map.put(standard[i]+"", i);
		}
	}
}