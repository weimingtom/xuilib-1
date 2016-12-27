// HTMLCodes
// Provides different conversions
//
// ?2004 Karl Runmo ,runmo@hotmail.com
//
// COVERED CODE IS PROVIDED UNDER THIS LICENSE ON AN "AS IS" BASIS, WITHOUT WARRANTY
// OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, WITHOUT LIMITATION, WARRANTIES
// THAT THE COVERED CODE IS FREE OF DEFECTS, MERCHANTABLE, FIT FOR A PARTICULAR PURPOSE
// OR NON-INFRINGING. THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE COVERED
// CODE IS WITH YOU. SHOULD ANY COVERED CODE PROVE DEFECTIVE IN ANY RESPECT, YOU (NOT
// THE INITIAL DEVELOPER OR ANY OTHER CONTRIBUTOR) ASSUME THE COST OF ANY NECESSARY
// SERVICING, REPAIR OR CORRECTION. THIS DISCLAIMER OF WARRANTY CONSTITUTES AN ESSENTIAL
// PART OF THIS LICENSE. NO USE OF ANY COVERED CODE IS AUTHORIZED HEREUNDER EXCEPT UNDER
// THIS DISCLAIMER.

#include <windows.h>
#include <TCHAR.h>

struct HTMLCODES{
	TCHAR szCode[10];
	TCHAR Code;
};
HTMLCODES g_HTMLCodes[] = {
	{TEXT("&quot;"),TEXT('"')},
	{TEXT("&amp;"),TEXT('&')},
	{TEXT("&lt;"),TEXT('<')},
	{TEXT("&gt;"),TEXT('>')},
	{ TEXT("&nbsp;"), TEXT('?') },
	{ TEXT("&iexcl;"), TEXT('?') },
	{ TEXT("&cent;"), TEXT('?') },
	{ TEXT("&pound;"), TEXT('?') },
	{ TEXT("&curren;"), TEXT('?') },
	{ TEXT("&yen;"), TEXT('?') },
	{ TEXT("&brvbar;"), TEXT('?') },
	{ TEXT("&sect;"), TEXT('?') },
	{ TEXT("&uml;"), TEXT('?') },
	{ TEXT("&copy;"), TEXT('?') },
	{ TEXT("&ordf;"), TEXT('?') },
	{ TEXT("&laquo;"), TEXT('?') },
	{ TEXT("&not;"), TEXT('?') },
	{ TEXT("&shy;"), TEXT('?') },
	{ TEXT("&reg;"), TEXT('?') },
	{ TEXT("&macr;"), TEXT('?') },
	{ TEXT("&deg;"), TEXT('?') },
	{ TEXT("&plusmn;"), TEXT('?') },
	{TEXT("&sup2;"), TEXT('?')},
	{ TEXT("&sup3;"), TEXT('?') },
	{ TEXT("&acute;"), TEXT('?') },
	{ TEXT("&micro;"), TEXT('?') },
	{ TEXT("&para;"), TEXT('?') },
	{ TEXT("&middot;"), TEXT('?') },
	{ TEXT("&cedil;"), TEXT('?') },
	{ TEXT("&sup1;"), TEXT('?') },
	{ TEXT("&ordm;"), TEXT('?') },
	{ TEXT("&raquo;"), TEXT('?') },
	{ TEXT("&frac14;"), TEXT('?') },
	{ TEXT("&frac12;"), TEXT('?') },
	{ TEXT("&frac34;"), TEXT('?') },
	{ TEXT("&iquest;"), TEXT('?') },
	{ TEXT("&Agrave;"), TEXT('?') },
	{ TEXT("&Aacute;"), TEXT('?') },
	{ TEXT("&Acirc;"), TEXT('?') },
	{ TEXT("&Atilde;"), TEXT('?') },
	{ TEXT("&Auml;"), TEXT('?') },
	{ TEXT("&Aring;"), TEXT('?') },
	{ TEXT("&AElig;"), TEXT('?') },
	{ TEXT("&Ccedil;"), TEXT('?') },
	{ TEXT("&Egrave;"), TEXT('?') },
	{ TEXT("&Eacute;"), TEXT('?') },
	{TEXT("&Ecirc;"), TEXT('?')},
	{TEXT("&Euml;"), TEXT('?')},
	{TEXT("&Igrave;"), TEXT('?')},
	{ TEXT("&Iacute;"), TEXT('?') },
	{ TEXT("&Icirc;"), TEXT('?') },
	{ TEXT("&Iuml;"), TEXT('?') },
	{TEXT("&ETH;"), TEXT('?')},
	{TEXT("&Ntilde;"), TEXT('?')},
	{TEXT("&Ograve;"), TEXT('?')},
	{TEXT("&Oacute;"), TEXT('?')},
	{TEXT("&Ocirc;"), TEXT('?')},
	{TEXT("&Otilde;"), TEXT('?')},
	{TEXT("&Ouml;"), TEXT('?')},
	{TEXT("&times;"), TEXT('?')},
	{TEXT("&Oslash;"), TEXT('?')},
	{TEXT("&Ugrave;"), TEXT('?')},
	{TEXT("&Uacute;"), TEXT('?')},
	{TEXT("&Ucirc;"), TEXT('?')},
	{TEXT("&Uuml;"), TEXT('?')},
	{TEXT("&Yacute;"), TEXT('?')},
	{TEXT("&THORN;"), TEXT('?')},
	{TEXT("&szlig;"), TEXT('?')},
	{TEXT("&agrave;"), TEXT('?')},
	{TEXT("&aacute;"), TEXT('?')},
	{ TEXT("&acirc;"), TEXT('?') },
	{ TEXT("&atilde;"), TEXT('?') },
	{ TEXT("&auml;"), TEXT('?') },
	{ TEXT("&aring;"), TEXT('?') },
	{ TEXT("&aelig;"), TEXT('?') },
	{ TEXT("&ccedil;"), TEXT('?') },
	{ TEXT("&egrave;"), TEXT('?') },
	{TEXT("&eacute;"), TEXT('?')},
	{ TEXT("&ecirc;"), TEXT('?') },
	{ TEXT("&euml;"), TEXT('?') },
	{ TEXT("&igrave;"), TEXT('?') },
	{ TEXT("&iacute;"), TEXT('?') },
	{ TEXT("&icirc;"), TEXT('?') },
	{ TEXT("&iuml;"), TEXT('?') },
	{ TEXT("&eth;"), TEXT('?') },
	{ TEXT("&ntilde;"), TEXT('?') },
	{ TEXT("&ograve;"), TEXT('?') },
	{ TEXT("&oacute;"), TEXT('?') },
	{ TEXT("&ocirc;"), TEXT('?') },
	{ TEXT("&otilde;"), TEXT('?') },
	{ TEXT("&ouml;"), TEXT('?') },
	{TEXT("&divide;"), TEXT('?')},
	{TEXT("&oslash;"), TEXT('?')},
	{TEXT("&ugrave;"), TEXT('?')},
	{TEXT("&uacute;"), TEXT('?')},
	{TEXT("&ucirc;"), TEXT('?')},
	{TEXT("&uuml;"), TEXT('?')},
	{TEXT("&yacute;"), TEXT('?')},
	{TEXT("&thorn;"), TEXT('?')},
	{TEXT("&yuml;"),TEXT('ÿ')},
	{TEXT("&OElig;"),TEXT('E')},
	{TEXT("&oelig;"),TEXT('e')},
	{TEXT("&Scaron;"),TEXT('S')},
	{TEXT("&scaron;"),TEXT('s')},
	{TEXT("&Yuml;"),TEXT('ÿ')},
	{TEXT("&fnof;"),TEXT('f')},
	{TEXT("&circ;"),TEXT('^')},
	{TEXT("&tilde;"),TEXT('~')},
	{TEXT("&ndash;"),TEXT('-')},
	{TEXT("&mdash;"),TEXT('-')},
	{ TEXT("&lsquo;"), TEXT('?') },
	{ TEXT("&rsquo;"), TEXT('?') },
	{TEXT("&sbquo;"),TEXT(',')},
	{TEXT("&ldquo;"),TEXT('\"')},
	{TEXT("&rdquo;"),TEXT('\"')},
	{TEXT("&bdquo;"),TEXT('?')},
	{ TEXT("&dagger;"), TEXT('?') },
	{ TEXT("&Dagger;"), TEXT('?') },
	{ TEXT("&bull;"), TEXT('?') },
	{ TEXT("&hellip;"), TEXT('?') },
	{ TEXT("&permil;"), TEXT('?') },
	{ TEXT("&lsaquo;"), TEXT('?') },
	{ TEXT("&rsaquo;"), TEXT('?') },
	{TEXT("&euro;"),TEXT('€')},
	{ TEXT("&trade;"), TEXT('?') },
	{{(char)0x97,(char)0x00},TEXT('-')},
	{{(char)0xA0,(char)0x00},TEXT(' ')},
	{TEXT(""),0}
};

LPTSTR ConvertFromHTMLCodes(LPTSTR szText)
{
	int i, j, k;
	for(k=j=0;szText[j];j++){
		for(i=0;g_HTMLCodes[i].Code;i++){
			if(!_tcsncmp(&szText[j],g_HTMLCodes[i].szCode,lstrlen(g_HTMLCodes[i].szCode))){
				szText[k++] = g_HTMLCodes[i].Code;
				j+=lstrlen(g_HTMLCodes[i].szCode)-1;
				break;
			}
		}
		if(!g_HTMLCodes[i].Code){
			if(!_tcsnicmp(&szText[j], TEXT("&#"),2)){
				j+=2;
				szText[k++] = _ttoi(&szText[j]);
				while(szText[j] && szText[j]!=';' && szText[j]!=' ')
					j++;
				if(!szText[j])
					break;
			}
			else
				szText[k++] = szText[j];
		}
	}
	szText[k]=0;
	return szText;
}

