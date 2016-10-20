class Solution {
public:
	int romanToInt(string s){
		if(s.size() == 1)
			return getNumFromRoman(s[0]);
		else{
		   	int sum = getNumFromRoman(s[0]);
			for( int i = 1; i < s.size(); i++)
			{
				int a = getNumFromRoman(s[i-1]);
				int b = getNumFromRoman(s[i]);
				if(a < b)
					sum += b - a - a;
				
				else
					sum += b;
			}
			return sum;
		}
	}

	int getNumFromRoman(char c){
		switch(c){
			case 'M':
			return 1000;
			case 'D':
			return 500;
			case 'C':
			return 100;
			case 'L':
			return 50;
			case 'X':
			return 10;
			case 'V':
			return 5;
			case 'I':
			return 1;
			default: return 0;
		}
	}
};