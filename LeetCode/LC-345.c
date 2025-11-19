har* reverseVowels(char* s) {
    int len = strlen(s);
    char newarray[len];
    int newcount = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
            s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
            newarray[newcount] = s[i];
            newcount++;
        }
    }

    int index = newcount - 1;    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
            s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
            s[i] = newarray[index];
            index--; 
        }
    }

    return s;
}
