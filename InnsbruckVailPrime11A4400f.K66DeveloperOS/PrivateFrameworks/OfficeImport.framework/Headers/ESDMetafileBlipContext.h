/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ESDBlipContext.h"
#import "OfficeImport-Structs.h"


@interface ESDMetafileBlipContext : ESDBlipContext {
	unsigned long mCb;	// 20 = 0x14
	unsigned long defaultHeaderSize;	// 24 = 0x18
}
@property(assign) unsigned long defaultHeaderSize;	// G=0x318f6891; S=0x3174f151; @synthesize
- (id)initWithOffset:(unsigned)offset byteCount:(unsigned)count uncompressed:(unsigned long)uncompressed stream:(SsrwOOStream *)stream streamID:(unsigned)anId;	// 0x3174f105
// declared property getter: - (unsigned long)defaultHeaderSize;	// 0x318f6891
- (bool)loadDelayedNode:(id)node;	// 0x31763a45
// declared property setter: - (void)setDefaultHeaderSize:(unsigned long)size;	// 0x3174f151
@end

