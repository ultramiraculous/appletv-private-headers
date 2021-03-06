/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface MPTimedMetadata : NSObject {
	void *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *allMetadata;	// G=0x34146969; 
@property(readonly, assign, nonatomic) NSString *key;	// G=0x341467dd; 
@property(readonly, assign, nonatomic) NSString *keyspace;	// G=0x34146809; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x34146911; 
@property(readonly, assign, nonatomic) id value;	// G=0x34146835; 
- (id)init;	// 0x3414669d
- (id)_initWithMetadataItem:(id)metadataItem;	// 0x341466e9
// declared property getter: - (id)allMetadata;	// 0x34146969
- (void)dealloc;	// 0x34146771
// declared property getter: - (id)key;	// 0x341467dd
// declared property getter: - (id)keyspace;	// 0x34146809
// declared property getter: - (double)timestamp;	// 0x34146911
// declared property getter: - (id)value;	// 0x34146835
@end

