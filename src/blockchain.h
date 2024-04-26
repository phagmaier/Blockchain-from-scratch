#include <cstdint>
#include <vector>
#include "block.h"

using vecBlock = std::vector<Block>;

class Blockchain{
  public:
    Blockchain();

    void AddBlock(Block bnew);

  private:
    uint32_t _nDifficulty;
    vecBlock _vChain;
    Block _GetLastBlock() const;
};
