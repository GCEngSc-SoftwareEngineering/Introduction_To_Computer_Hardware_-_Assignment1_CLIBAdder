# Introduction To Computer Hardware.

## ToDo:
- how to convert c++ float to byte[]
https://www.google.com/search?q=how+to+convert+c%2B%2B+float+to+byte%5B%5D&sca_esv=6e72ffa629272dce&rlz=1C1HKFL_enAU1205AU1205&sxsrf=ANbL-n6KxbNQSeno85CgM1rEBZQCSgafLw%3A1773480149221&ei=1Si1aaiLDeO7vr0P29Gi4QQ&biw=958&bih=910&ved=0ahUKEwjoyb2yiJ-TAxXjna8BHduoKEwQ4dUDCBQ&uact=5&oq=how+to+convert+c%2B%2B+float+to+byte%5B%5D&gs_lp=Egxnd3Mtd2l6LXNlcnAiImhvdyB0byBjb252ZXJ0IGMrKyBmbG9hdCB0byBieXRlW10yBRAhGKABMgUQIRigATIFECEYoAEyBRAhGJ8FMgUQIRifBTIFECEYnwVIpRNQzgRYhwxwAXgAkAEBmAGNAqABgQqqAQUwLjIuNLgBA8gBAPgBAZgCBqACuwjCAg4QABiABBiwAxiGAxiKBcICCBAAGLADGO8FwgILEAAYsAMYogQYiQXCAgcQIRigARgKmAMAiAYBkAYHkgcFMS4yLjOgB8cjsgcFMC4yLjO4B7UIwgcFMC41LjHIBw2ACAA&sclient=gws-wiz-serp

- how to convert java byte[] to c++ float
https://www.google.com/search?q=how+to+convert+java+byte%5B%5D+to+c%2B%2B+float&sca_esv=6e72ffa629272dce&rlz=1C1HKFL_enAU1205&biw=958&bih=910&sxsrf=ANbL-n4A8f_5EaRqaYwudbTZ-FCzf3lUxA%3A1773480149214&ei=1Si1aerbDJuivr0PyZWVyQ8&ved=0ahUKEwiqmr2yiJ-TAxUbka8BHclKJfkQ4dUDCBQ&uact=5&oq=how+to+convert+java+byte%5B%5D+to+c%2B%2B+float&gs_lp=Egxnd3Mtd2l6LXNlcnAiJ2hvdyB0byBjb252ZXJ0IGphdmEgYnl0ZVtdIHRvIGMrKyBmbG9hdDIFECEYoAEyBRAhGKABMgUQIRigAUiDe1DEBli2V3ABeACQAQCYAbICoAGcIaoBCDAuNC4xNC4xuAEDyAEA-AEBmAIUoALjIcICDhAAGIAEGLADGIYDGIoFwgIIEAAYsAMY7wXCAgsQABiwAxiiBBiJBcICBhAAGBYYHsICBRAAGO8FwgILEAAYgAQYhgMYigXCAggQABiiBBiJBcICCBAAGIAEGKIEwgIHECEYoAEYCpgDAIgGAZAGB5IHCDEuMi4xNS4yoAezcrIHCDAuMi4xNS4yuAffIcIHBjAuMTYuNMgHK4AIAA&sclient=gws-wiz-serp

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
