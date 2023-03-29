import 'dart:math';

String generatePassword() {
  var random = Random.secure();

  var password = '';
  var numSpecialChars = 0;
  var numDigits = 0;

  for (var i = 0; i < 10; i++) {
    var randInt = random.nextInt(4);

    if (randInt == 0 && numSpecialChars < 2) {
      password += String.fromCharCode(random.nextInt(15) + 33);
      numSpecialChars++;
    } else if (randInt == 1 && numDigits < 2) {
      password += random.nextInt(10).toString();
      numDigits++;
    } else {
      password += String.fromCharCode(random.nextInt(26) + 97);
    }
  }

  while (numSpecialChars < 2) {
    password += String.fromCharCode(random.nextInt(15) + 33);
    numSpecialChars++;
  }
  while(numDigits < 2) {
    password += random.nextInt(10).toString();
    numDigits++;
  }

  return password;
}

void main() {
  var password = generatePassword();
  print(password);
}
