#pragma once
// (c) 2017 by CoolABCCoder <coolabccoder@gmail.com>

#include <openssl/evp.h>






class CryptoHash
{
private:
	EVP_MD_CTX *mHashCtx;
public:
	CryptoHash();
	~CryptoHash();


};

