bool isSumEqual(string firstWord, string secondWord, string targetWord) {
    return (convertNum(firstWord)+convertNum(secondWord)) == convertNum(targetWord);
}

int convertNum(string& word){      
    int ascii = 97, num=0;
    for (char& c : word)
        num = (num*10) + int(c)-ascii; 
    return num;
}