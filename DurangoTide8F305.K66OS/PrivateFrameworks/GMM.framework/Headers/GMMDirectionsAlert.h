/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMDirectionsAlert : PBCodable {
@private
	NSString *_headline;	// 4 = 0x4
	NSString *_text;	// 8 = 0x8
	NSString *_url;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasHeadline;	// G=0x32b98715; 
@property(readonly, assign, nonatomic) BOOL hasText;	// G=0x32b98729; 
@property(readonly, assign, nonatomic) BOOL hasUrl;	// G=0x32b9873d; 
@property(retain, nonatomic) NSString *headline;	// G=0x32b98771; S=0x32b98b85; @synthesize=_headline
@property(retain, nonatomic) NSString *text;	// G=0x32b98761; S=0x32b98bad; @synthesize=_text
@property(retain, nonatomic) NSString *url;	// G=0x32b98751; S=0x32b98bd5; @synthesize=_url
- (id)init;	// 0x32b98781
- (void)dealloc;	// 0x32b98b19
- (id)description;	// 0x32b98841
- (id)dictionaryRepresentation;	// 0x32b987ad
// declared property getter: - (BOOL)hasHeadline;	// 0x32b98715
// declared property getter: - (BOOL)hasText;	// 0x32b98729
// declared property getter: - (BOOL)hasUrl;	// 0x32b9873d
// declared property getter: - (id)headline;	// 0x32b98771
- (BOOL)readFrom:(id)from;	// 0x32b989fd
// declared property setter: - (void)setHeadline:(id)headline;	// 0x32b98b85
// declared property setter: - (void)setText:(id)text;	// 0x32b98bad
// declared property setter: - (void)setUrl:(id)url;	// 0x32b98bd5
// declared property getter: - (id)text;	// 0x32b98761
// declared property getter: - (id)url;	// 0x32b98751
- (void)writeTo:(id)to;	// 0x32b98959
@end
