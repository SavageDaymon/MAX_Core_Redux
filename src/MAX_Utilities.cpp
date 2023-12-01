#include <MAX_Core.h>

char ucs(const char ch)
{
    return((ch >= 'a' && ch <= 'z') ? ch - ('a' - 'A') : ch);
}

void HandleCommands(void)
{
char    	buffer[80];
int     	bytes = Serial.available();
int			value;

    if(bytes)
    {
        Serial.readBytes(buffer,bytes);
		value = atoi(&buffer[1]);
        switch(ucs(*buffer))
        {
        case '?' :													// Help
            Serial.println("MAX Core Commands:");
            Serial.println("?            - Display Commands");
            break;
		case 'G' :													// GPIO Test
			break;
        }
    }
}
