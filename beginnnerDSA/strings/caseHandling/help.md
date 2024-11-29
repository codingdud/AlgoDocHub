#### **Erase**
```cpp
std::string s = "Hello World";
s.erase(5, 1); // Remove the space: "HelloWorld"
```

---

### **2. String Searching**

#### **Find**
```cpp
std::string s = "Hello World";
size_t pos = s.find("World"); // Returns 6 (index where "World" starts)
if (pos != std::string::npos) {
    std::cout << "Found at index " << pos << std::endl;
}
```

#### **RFind (Reverse Find)**
```cpp
std::string s = "abcabc";
size_t pos = s.rfind("abc"); // Returns 3 (last occurrence of "abc")
```

#### **Substring Check**
```cpp
std::string s = "Hello World";
if (s.find("World") != std::string::npos) {
    std::cout << "Substring found!" << std::endl;
}
```

---

### **3. String Slicing**

#### **Substring**
```cpp
std::string s = "Hello World";
std::string sub = s.substr(0, 5); // Result: "Hello"
```

#### **Split (Custom Implementation Using Delimiters)**
```cpp
#include <sstream>
#include <vector>

std::vector<std::string> split(const std::string &s, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(s);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

// Usage
std::string s = "Hello,World,DSA";
std::vector<std::string> tokens = split(s, ',');
// tokens = {"Hello", "World", "DSA"};
```

---

### **4. String Modification**

#### **Replace**
```cpp
std::string s = "Hello World";
s.replace(6, 5, "C++"); // Replace "World" with "C++": "Hello C++"
```

#### **Transform (Uppercase/Lowercase)**
```cpp
#include <algorithm> // for transform

std::string s = "Hello World";
std::transform(s.begin(), s.end(), s.begin(), ::toupper); // To Uppercase: "HELLO WORLD"
std::transform(s.begin(), s.end(), s.begin(), ::tolower); // To Lowercase: "hello world"
```

---

### **5. String Comparison**

#### **Compare**
```cpp
std::string s1 = "abc";
std::string s2 = "abd";
if (s1.compare(s2) < 0) {
    std::cout << "s1 is smaller than s2" << std::endl;
}
```

#### **Lexicographical Comparison**
```cpp
#include <algorithm>
if (std::lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end())) {
    std::cout << "s1 comes before s2" << std::endl;
}
```

---

### **6. String Properties**

#### **Length/Size**
```cpp
std::string s = "Hello";
std::cout << "Length: " << s.size() << std::endl; // Output: 5
```

#### **Empty Check**
```cpp
std::string s;
if (s.empty()) {
    std::cout << "String is empty!" << std::endl;
}
```

---

### **7. Iterating Over Strings**

#### **Using Range-Based Loop**
```cpp
std::string s = "Hello";
for (char c : s) {
    std::cout << c << " ";
} // Output: H e l l o
```

#### **Using Iterator**
```cpp
for (std::string::iterator it = s.begin(); it != s.end(); ++it) {
    std::cout << *it << " ";
}
```

---

### **8. String to Number and Vice Versa**

#### **String to Integer**
```cpp
#include <string>
std::string s = "12345";
int num = std::stoi(s); // num = 12345
```

#### **String to Double**
```cpp
std::string s = "123.45";
double num = std::stod(s); // num = 123.45
```

#### **Number to String**
```cpp
int num = 12345;
std::string s = std::to_string(num); // s = "12345"
```

---

### **9. Reversing a String**
```cpp
std::string s = "Hello";
std::reverse(s.begin(), s.end()); // Result: "olleH"
```

---

### **10. Removing Specific Characters**
```cpp
std::string s = "a b c d";
s.erase(std::remove(s.begin(), s.end(), ' '), s.end()); // Remove spaces: "abcd"
```
