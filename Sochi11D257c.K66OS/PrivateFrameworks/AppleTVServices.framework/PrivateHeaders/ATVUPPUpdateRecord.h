/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class ATVBookmarkKey, ATVUniversalPlaybackPositionRecord;

@interface ATVUPPUpdateRecord : NSObject {
	ATVBookmarkKey *_bookmarkKey;	// 4 = 0x4
	ATVUniversalPlaybackPositionRecord *_uppRecord;	// 8 = 0x8
}
@property(retain, nonatomic) ATVBookmarkKey *bookmarkKey;	// G=0x303fa841; S=0x303fa851; @synthesize=_bookmarkKey
@property(retain, nonatomic) ATVUniversalPlaybackPositionRecord *uppRecord;	// G=0x303fa879; S=0x303fa889; @synthesize=_uppRecord
- (void).cxx_destruct;	// 0x303fa8b1
// declared property getter: - (id)bookmarkKey;	// 0x303fa841
// declared property setter: - (void)setBookmarkKey:(id)key;	// 0x303fa851
// declared property setter: - (void)setUppRecord:(id)record;	// 0x303fa889
// declared property getter: - (id)uppRecord;	// 0x303fa879
@end

