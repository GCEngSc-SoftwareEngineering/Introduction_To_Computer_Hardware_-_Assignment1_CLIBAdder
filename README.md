# Introduction_To_Computer_Hardware.

## ToDo:
- JNI value mangling between java and c++.
https://www.google.com/search?q=how+to+convert+c%2B%2B+float+to+java+float&rlz=1C1HKFL_enAU1205&oq=how+to+convert+c%2B%2B+float+to+java+float&gs_lcrp=EgZjaHJvbWUyBggAEEUYOTIGCAEQRRhB0gEIMTAwOGowajmoAgCwAgA&sourceid=chrome&ie=UTF-8

## Using.
### Windows 11 Home.

Version: 25H2

Build id: 26200.7840

### Eclipse 

Version: 2025-12 (4.38.0)

Build id: 20251204-0850

## Dependencies.
### Eclipse.
 - https://www.eclipse.org/downloads/
 
### The Java Development Kit (JDK).
 - https://www.eclipse.org/downloads/packages/ 

### Apache Maven. 
 - https://maven.apache.org/install.html
 
### Java Native Access Library.
 - https://github.com/java-native-access/jna

 #### edit pom.xml.
````
    <dependency>
    	<groupId>net.java.dev.jna</groupId>
    	<artifactId>jna</artifactId>
    	<version>5.18.1</version> <!-- Check for newest 2026 version -->
    </dependency>
````
