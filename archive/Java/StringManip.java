public class StringManip {
	public static String[] vwl = {"a", "e", "u", "i", "o"};
	public static String firstWord(String s) {
		return s.substring(0,s.indexOf(' '));
	}
	public static String lastWord(String s) {
		int loc = 0, nextLoc = s.indexOf(' ');
		while (nextLoc != -1) {
			loc = nextLoc;	
			nextLoc = s.indexOf(' ', nextLoc+1);
		}
		return s.substring(loc+1, s.length());
	}
	public static String swapWords(String s) {
		return lastWord(s) + s.substring(s.indexOf(' ')+1, s.length()-lastWord(s).length()) + firstWord(s);
	}
	public static String spaceSafe(String s) {
		int loc = s.indexOf("  ");
		while (loc != -1) {
			int lastLoc = loc+1;
			while (lastLoc < s.length() && s.substring(lastLoc, lastLoc+1).equals(" "))
				++lastLoc;
			s = s.substring(0, loc) + s.substring(lastLoc-1, s.length());
			loc = s.indexOf("  ");
		}
		if (s.substring(0,1).equals(" "))
			s = s.substring(1,s.length());
		if (s.substring(s.length()-1, s.length()).equals(" "))
			s = s.substring(0, s.length()-1);
		return s;
	}
	public static int wordCount(String s) {
		s = spaceSafe(s);
		int loc = s.indexOf(' ');
		int i = 1;
		while (loc != -1) {
		++i;	
		loc = s.indexOf(' ', loc+1);
		}
		return i;
	}
	public static int countNWords(String s, int n) {
		s = spaceSafe(s);
		int count = 0;
		int loc = -1, nextLoc = s.indexOf(' ');
		while (nextLoc != -1) {
			if (nextLoc - loc == n+1)
				++count;
			loc = nextLoc;
			nextLoc = s.indexOf(' ', nextLoc+1);
		}
		if (s.length() - loc == n+1)
			++count;
		return count;
	}
	public static int countSymbols(String s) {
		int count = 0;
		for (int i = 0; i < s.length(); ++i) {
			char c = (char)s.substring(i,i+1).compareTo(" ");
			if (!(32 < c && c < 59 || 64 < c && c < 91 || c == 0))
				++count;
		}
		return count;
	}
	public static String longestWord(String s) {
		s = spaceSafe(s);
		int loc = 0, nextLoc = s.indexOf(' ');
		int max = 0, indx = 0;
		while (nextLoc != -1) {
			if (nextLoc-loc > max+1) {
				indx = loc+1;
				max = nextLoc-loc-1;
			}
			loc = nextLoc;
			nextLoc = s.indexOf(' ', nextLoc+1);
		}
		return s.substring(indx, indx+max);
	}
	public static String reverseLongestWord(String s) {
		return reverseWord(longestWord(s));
	}
	public static String reverseWord(String s) {
		String out = "";
		for (int i = s.length()-1; i > -1; --i) {
			out += s.substring(i, i+1);
		}
		return out;
	}
	public static String newLanguage(String s) {
		s = spaceSafe(s) + " ";
		String out = "";
		int loc = -1, nextLoc = s.indexOf(' ');
		while (nextLoc != -1) {
			String wrd = s.substring(loc+1, nextLoc);
			if (isVowel(wrd.substring(0,1)))
				out += wrd + "hey ";
			else {
				int frVwl = firstVowel(wrd);
				out += wrd.substring(frVwl, wrd.length()) + wrd.substring(0, frVwl) + "ey ";
			}
			loc = nextLoc;
			nextLoc = s.indexOf(' ', nextLoc+1);
		}
		return out;
	}
	public static boolean isVowel(String s) {
		boolean flag = false;
		for (String ch : vwl)
			flag |= s.equals(ch);
		return flag;
	}
	public static int firstVowel(String s) {
		int i;
		for (i = 0; i < s.length(); ++i)
			if(isVowel(s.substring(i,i+1)))
				break;
		return i;
	}
	public static void main(String[] args) {
		String f = "That fruit is almost ripe";
		String s = "Do not go gentle into that good night, Old age should burn and rave at close of day; Rage, rage against the dying of the light.";
		String a = "    This     sentence   has unnecessary       spaces    ";
		System.out.println(newLanguage(f));
		System.out.println(firstWord(s));
		System.out.println(lastWord(s));
		System.out.println(swapWords(s));
		System.out.println(wordCount(f));
		System.out.println(countNWords(f, 4));
		System.out.println(countSymbols(s));
		System.out.println(longestWord(s));
		System.out.println(reverseLongestWord(s));
	}
}
