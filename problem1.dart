String countChars(String str) {
  var count = 0;

  var result = '';

  var currentChar;

  for (var i = 0; i < str.length; i++) {
    if (currentChar == null) {
      currentChar = str[i];
      count = 1;
    }else if(currentChar == str[i]) {
      count++;
    }
    
    else {
      result += '$currentChar$count';
      currentChar = str[i];
      count = 1;
    }
  }

  result += '$currentChar$count';

  return result;
}

void main() {
  var str = 'aaabbccdeae';
  var result = countChars(str);
  print(result);
}
