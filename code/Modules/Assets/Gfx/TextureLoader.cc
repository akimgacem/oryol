//------------------------------------------------------------------------------
//  TextureLoader.cc
//------------------------------------------------------------------------------
#include "Pre.h"
#include "TextureLoader.h"

namespace Oryol {

OryolClassImpl(TextureLoader);

//------------------------------------------------------------------------------
void
TextureLoader::Loaded(const URL& url, int32 ioLane, const void* data, int32 numBytes) {
    return TextureLoaderBase::Loaded(url, ioLane, data, numBytes);
}

//------------------------------------------------------------------------------
void
TextureLoader::Failed(const URL& url, IOStatus::Code ioStatus) {
    return TextureLoaderBase::Failed(url, ioStatus);
}

} // namespace Oryol