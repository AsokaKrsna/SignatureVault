# IoC for MSIL/Bobik
Malware analysis and more technical information at [https://decoded.avast.io/martinchlumecky/bobik](https://decoded.avast.io/martinchlumecky/bobik)

## DDoS Targets
Examples of captured XML config files are stored in the [XML_configs](https://github.com/avast/ioc/tree/master/Bobik/XML_configs) folder.

The targeted hosts are listed in the [targets.txt](targets.txt) file. A complete analysis of the Bobiks’ targets is in the [targets.xlsx](targets.xlsx) file.

## Decryptor
The Python [decryptor.py](decryptor.py) script decrypts the HTTP responses.

## Samples

### Variant 1

**Hardcoded C&C URLs**

    http://77.232.41.206/bcaa8752-51ff-4e35-8ef9-4aefbf42b482
    http://2.57.122.82/d380f816-7412-400a-9b64-78e35dd51f6e  

**sha256**

    00fead2e42b663522bfd8de53973b52dce737862b4ed6b965edb547364c64572
    01f0c34c6dccbd321a0a91146e8627a8408dd26cb7e7c5164a1d0f2bfeb16316
    2a450e29979be9fffec1459861a40c3b61445a47cd544665e86a44ed4fe719c9
    59f9e06b0bb5ca296df0b224f8c46982d78f47a1d2d8e536a7792d1b0e8242c4
    7256c9d385cbcf130e023380c77feb89e50d206d82ac4f653d2448b88e0499a6
    786095166809e6dcdb295f4cea90b877b965fc9b221fb364bfb93f5d5028589c
    7dad1b3414823ed590acfdd146026b11706c3482247e96952b7c83d1eb7b8ea2
    85cb02fdebb021674f8526b4e3a85abba59919b9b185a3ea6237a6ed8927beac
    ad680fc861a68e677da3ace15aaf9bb1736867c9171faf7e1849acc0e9bdd5af
    bab56e71e7d0fd683b14b74d4001697550a93aacb5ce42313a8c32945d33d4bd
    dfe515f26cddf21b3467c2d228b62435baa3deb09d14ce0fec4096d346384e58
    e8bf07b3c2cb794286aafc7a7fc7070226be36b99b339484564c7743ac4aaec8
    ee97d9bec755ced951f1e3296c543b3268f8dc8bed70a0007b3a6df4a1fd81f7
    eebfae33bf2d95084ca01400824d1e921cd51322e45b285146830984c2d45649
    f2ac8b2c9ef18f47ab6703fd5e84d7fd7edb872fe22f42324d7d8d5e322eb6f2
    f712178db07cfe487e9c6e0c2d64bbe996ccda8d110a9eaa2e18b5a306c0f45d
    f8dcb9e093781f2081a6deed618bf75484b086bc48ccf7a98fcd27f7cbb6b8fc

### Variant 2

**Hardcoded C&C URLs**

    http://v9agm8uwtjmz.sytes.net/d380f816-7412-400a-9b64-78e35dd51f6e/update

**sha256**

    3d1817e36ad70a58b809e0eb1bd49533397d58bede47cf98fb4bf306c39109df
    55875b324f86f112adfaad5b5f4b5c3a8028e02a9dd6f6372cedd96a26afb81c

  

### Variant 3

**Hardcoded C&C URLs**

    http://v9agm8uwtjmz.sytes.net/d380f816-7412-400a-9b64-78e35dd51f6e/update
    http://q7zemy6zc7ptaeks.servehttp.com/d380f816-7412-400a-9b64-78e35dd51f6e/update
    

**sha256**

    4ae750334d6d0ade3f3c8dea1d5d49c277097010d1af9e85910cd4d410ff592e
    ec80e279830d478f169c8232ff0bb21f84f57b1baa920366af0e81fa380f48a4
