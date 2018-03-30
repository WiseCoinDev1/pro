// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
//Copyright (c) 2018 The Illuminum Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "assert.h"

#include "chainparams.h"
#include "main.h"
#include "util.h"

#include <boost/assign/list_of.hpp>

using namespace boost::assign;

struct SeedSpec6 {
	uint8_t addr[16];
	uint16_t port;
};

#include "chainparamsseeds.h"

//
// Main network
//

// Convert the pnSeeds array into usable address objects.
static void convertSeeds(std::vector<CAddress> &vSeedsOut, const unsigned int *data, unsigned int count, int port)
{
	// It'll only connect to one or two seed nodes because once it connects,
	// it'll get a pile of addresses with newer timestamps.
	// Seed nodes are given a random 'last seen time' of between one and two
	// weeks ago.
	const int64_t nOneWeek = 7 * 24 * 60 * 60;
	for (unsigned int k = 0; k < count; ++k)
	{
		struct in_addr ip;
		unsigned int i = data[k], t;

		// -- convert to big endian
		t = (i & 0x000000ff) << 24u
			| (i & 0x0000ff00) << 8u
			| (i & 0x00ff0000) >> 8u
			| (i & 0xff000000) >> 24u;

		memcpy(&ip, &t, sizeof(ip));

		CAddress addr(CService(ip, port));
		addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
		vSeedsOut.push_back(addr);
	}
}

class CMainParams : public CChainParams {
public:
	CMainParams() {
		// The message start string is designed to be unlikely to occur in normal data.
		// The characters are rarely used upper ASCII, not valid as UTF-8, and produce
		// a large 4-byte int at any alignment.
		pchMessageStart[0] = 0x6e;
		pchMessageStart[1] = 0x68;
		pchMessageStart[2] = 0x6b;
		pchMessageStart[3] = 0xd8;
		vAlertPubKey = ParseHex("0461ffc6b19288d13257c6bd0a3669e50d4b06aa5298667a3cd02691b4a3e59dd320de5b8f1d84cee9e8d3a6b2e9c8caaa97246709e5824505ceca2334c49dfd57");
		nDefaultPort = 43325;
		nRPCPort = 43324;
		bnProofOfWorkLimit = CBigNum(~uint256(0) >> 16);

		// Build the genesis block. Note that the output of the genesis coinbase cannot
		// be spent as it did not originally exist in the database.

		const char* pszTimestamp = "NY Times 30 Mar 2018 Trump Attacks Amazon, Saying It Does Not Pay Enough Taxes";
		std::vector<CTxIn> vin;
		vin.resize(1);
		vin[0].scriptSig = CScript() << 0 << CBigNum(42) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
		std::vector<CTxOut> vout;
		vout.resize(1);
		vout[0].SetEmpty();
		CTransaction txNew(1, 1426700641, vin, vout, 0);
		genesis.vtx.push_back(txNew);
		genesis.hashPrevBlock = 0;
		genesis.hashMerkleRoot = genesis.BuildMerkleTree();
		genesis.nVersion = 1;
		genesis.nTime = 1522380131; //
		genesis.nBits = 0x1e0ffff0;
		genesis.nNonce = 773683;



		hashGenesisBlock = genesis.GetHash();
/*
                if (true ) {
		// This will figure out a valid hash and Nonce if you're
		// creating a different genesis block:
	    uint256 hashTarget = CBigNum().SetCompact(genesis.nBits).getuint256();
	    while (genesis.GetHash() > hashTarget)
	    {
	        ++genesis.nNonce;
	        if (genesis.nNonce == 0)
		        {
		            printf("NONCE WRAPPED, incrementing time");
		            ++genesis.nTime;
		        }
	          }
	   }
 
        //// debug print
	      printf("block.GetHash() == %s\n", genesis.GetHash().ToString().c_str());
	      printf("block.hashMerkleRoot == %s\n", genesis.hashMerkleRoot.ToString().c_str());
	      printf("block.nTime = %u \n", genesis.nTime);
	      printf("block.nNonce = %u \n", genesis.nNonce);		
*/
                assert(genesis.hashMerkleRoot == uint256("0xff19a1726b85ba1d2397dd7681e46066ac8973974df60d03bf43e39c2fb2d2a3"));
		assert(hashGenesisBlock == uint256("0x000005c07a29876c0f19d2b699635955e05a3027f7d7eef9087dc02037b3999f"));


		base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 33); // E
		base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 48); // L
		base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 138); // x
		base58Prefixes[STEALTH_ADDRESS] = std::vector<unsigned char>(1, 103); // i
		base58Prefixes[EXT_PUBLILM_KEY] = list_of(0x04)(0x88)(0x06)(0x2D).convert_to_container<std::vector<unsigned char> >();
		base58Prefixes[EXT_SECRET_KEY] = list_of(0x04)(0x88)(0xAD)(0xE4).convert_to_container<std::vector<unsigned char> >();

		vSeeds.push_back(CDNSSeedData("0", "104.156.249.248"));
		vSeeds.push_back(CDNSSeedData("1", ""));
		vSeeds.push_back(CDNSSeedData("2",  ""));
		vSeeds.push_back(CDNSSeedData("3",  ""));
		convertSeeds(vFixedSeeds, pnSeed, ARRAYLEN(pnSeed), nDefaultPort);

		nPoolMaxTransactions = 3;
		//strSporkKey = "046f78dcf911fbd61910136f7f0f8d90578f68d0b3ac973b5040fb7afb501b5939f39b108b0569dca71488f5bbf498d92e4d1194f6f941307ffd95f75e76869f0e";
		//strMasternodePaymentsPubKey = "046f78dcf911fbd61910136f7f0f8d90578f68d0b3ac973b5040fb7afb501b5939f39b108b0569dca71488f5bbf498d92e4d1194f6f941307ffd95f75e76869f0e";
		strDarksendPoolDummyAddress = "i7FBJNGDmEsU5wx2m3xw85N8kRgCqA8S7L";
		nLastPOWBlock = 100000000;
		nPOSStartBlock = 1;
	}


	virtual const CBlock& GenesisBlock() const { return genesis; }
	virtual Network NetworkID() const { return CChainParams::MAIN; }

	virtual const vector<CAddress>& FixedSeeds() const {
		return vFixedSeeds;
	}
protected:
	CBlock genesis;
	vector<CAddress> vFixedSeeds;
};
static CMainParams mainParams;


//
// Testnet
//

class CTestNetParams : public CMainParams {
public:
	CTestNetParams() {
		// The message start string is designed to be unlikely to occur in normal data.
		// The characters are rarely used upper ASCII, not valid as UTF-8, and produce
		// a large 4-byte int at any alignment.
		pchMessageStart[0] = 0x1c;
		pchMessageStart[1] = 0x5e;
		pchMessageStart[2] = 0xa3;
		pchMessageStart[3] = 0x2b;
		bnProofOfWorkLimit = CBigNum(~uint256(0) >> 16);
		vAlertPubKey = ParseHex("0496d2f338c36664ea75d3d39c381e7ff29818cd5a462ee0225199d1fe43f17597be1ee6809b5c15f2697b1b906cf7b3606df2525b6681ecba737cc07a9ecaba89");
		nDefaultPort = 33134;
		nRPCPort = 33154;
		strDataDir = "testnet";

		// Modify the testnet genesis block so the timestamp is valid for a later start.
                genesis.nTime = 1522350663;
		genesis.nBits = genesis.nBits;
		genesis.nNonce = 35887;

                hashGenesisBlock = genesis.GetHash();
/*
		if (true ) {
		// This will figure out a valid hash and Nonce if you're
		// creating a different genesis block:
	    uint256 hashTarget = CBigNum().SetCompact(genesis.nBits).getuint256();
	    while (genesis.GetHash() > hashTarget)
	    {
	        ++genesis.nNonce;
	        if (genesis.nNonce == 0)
		        {
		            printf("NONCE WRAPPED, incrementing time");
		            ++genesis.nTime;
		        }
	         }
	   }
 
        //// debug print
	      printf("block.GetHash() == %s\n", genesis.GetHash().ToString().c_str());
	      printf("block.hashMerkleRoot == %s\n", genesis.hashMerkleRoot.ToString().c_str());
	      printf("block.nTime = %u \n", genesis.nTime);
	      printf("block.nNonce = %u \n", genesis.nNonce);
*/
		assert(hashGenesisBlock == uint256("0x000079d6aad16991cfb2aa7b476f7241b785372e0cc1d50514e8beb163476c05"));

		vFixedSeeds.clear();
		vSeeds.clear();

		base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 28);
		base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 38);
		base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 88);
		base58Prefixes[STEALTH_ADDRESS] = std::vector<unsigned char>(1, 98);
		base58Prefixes[EXT_PUBLILM_KEY] = list_of(0x04)(0x35)(0x87)(0xCF).convert_to_container<std::vector<unsigned char> >();
		base58Prefixes[EXT_SECRET_KEY] = list_of(0x04)(0x35)(0x83)(0x94).convert_to_container<std::vector<unsigned char> >();

		convertSeeds(vFixedSeeds, pnTestnetSeed, ARRAYLEN(pnTestnetSeed), nDefaultPort);

		nLastPOWBlock = 0x7fffffff;
	}
	virtual Network NetworkID() const { return CChainParams::TESTNET; }
};
static CTestNetParams testNetParams;


static CChainParams *pCurrentParams = &mainParams;

const CChainParams &Params() {
	return *pCurrentParams;
}

void SelectParams(CChainParams::Network network) {
	switch (network) {
	case CChainParams::MAIN:
		pCurrentParams = &mainParams;
		break;
	case CChainParams::TESTNET:
		pCurrentParams = &testNetParams;
		break;
	default:
		assert(false && "Unimplemented network");
		return;
	}
}

bool SelectParamsFromCommandLine() {

	bool fTestNet = GetBoolArg("-testnet", false);

	if (fTestNet) {
		SelectParams(CChainParams::TESTNET);
	}
	else {
		SelectParams(CChainParams::MAIN);
	}
	return true;
}
