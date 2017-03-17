#include "cryptohash.h"



CryptoHash::CryptoHash()
{
	mHashCtx = EVP_MD_CTX_create();
	
}


CryptoHash::~CryptoHash()
{
	// TODO: Clear memory for secure usage
	EVP_MD_CTX_destroy(mHashCtx);

}
