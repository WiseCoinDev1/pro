Illuminum Release Tree

Illuminum is a POW/PoS-based cryptocurrency.

Illuminum is a PoW (Scrypt) / PoS / Master Node hybrid cryptocurrency, with a 5 million coin maximum supply, which is generated at a slower rate every 1 Million ILM, until it's limit is reached. Master Node cost 3000ILM, block size is 20MB, and block time is ~2Minutes.

50% of Blocks are PoW , and 50% are PoS, of which each PoS block is split between Masternode 60% and Staker 40%.

Block Spacing: 120 Seconds
Diff Retarget: every Blocks
Maturity: 30 Blocks
Stake Minimum Age: 1 Hours

Default Network Ports:
Port: 43325
RPC Port: 43324


For compiling on different architectures, see the docs/build-*os* documents. Otherwise, view releases page for windows qt-wallets.

****
ILM includes an Address Index feature, based on the address index API (searchrawtransactions RPC command) implemented in Bitcoin Core but modified the implementation to work with the ILM codebase (PoS coins maintain a txindex by default for instance).

Initialize the Address Index By Running with -reindexaddr Command Line Argument.  It may take 10-15 minutes to build the initial index.

ILM is dependent upon libsecp256k1 by sipa, the sources for which can be found here:
https://github.com/bitcoin/secp256k1
****
