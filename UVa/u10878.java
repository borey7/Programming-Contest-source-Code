import java.util.* ;

class u10878 
{
	public static void main(String[] args) 
	{
		Scanner input = new Scanner(System.in) ;
			
		Map<String, Integer> list = new HashMap<String, Integer>();

		do
		{		
			String tap = input.nextLine() ;

			if(list.containsKey(tap))
			{
				int code = (list.get(tap)).intValue();
				System.out.print((char)code);
			}
			else
			{
				if(tap.charAt(1)!='_')
				{
					String codeString = " "; 
					if(tap.charAt(2)!='_' && tap.charAt(2)=='o')
					{
						codeString = "1";
					}
					else
					{
						codeString = "0";
					}

					for(int i=3 ;i<10 ; i++)
					{
						if(i!=6 && tap.charAt(3)!='_')
						{
							if(tap.charAt(i)=='o')
							{
								codeString = codeString + "1";
							} 
							else 
							{
								codeString = codeString + "0";
							}				
						}
					}				
					int i=0 ; 
					char c ;		
					int charCode = Integer.parseInt(codeString, 2);
					c = (char)(charCode) ;
					System.out.print(c) ;

					list.put(tap,charCode);		
				}						
			}
		}while(input.hasNextLine()) ;
	}
}