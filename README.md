# Introduction To Computer Hardware.

## BRAVO_Release (Open Testing).

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
<dependencies>
    <!-- JNA Core Dependency -->
    <dependency>
        <groupId>net.java.dev.jna</groupId>
        <artifactId>jna</artifactId>
        <version>5.18.1</version> <!-- Use the latest version from Maven Central -->
    </dependency>

    <!-- Optional: JNA Platform Dependency (for common OS functions) -->
    <dependency>
        <groupId>net.java.dev.jna</groupId>
        <artifactId>jna-platform</artifactId>
        <version>5.18.1</version> <!-- Check for newest 2026 version -->
    </dependency>
</dependencies>
````
