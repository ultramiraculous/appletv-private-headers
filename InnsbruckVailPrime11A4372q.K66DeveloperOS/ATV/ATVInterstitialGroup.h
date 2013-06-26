/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVFeedInterstitialGroupElement, NSDictionary, NSArray, ATVFeedDocument;

__attribute__((visibility("hidden")))
@interface ATVInterstitialGroup : XXUnknownSuperclass {
	ATVFeedDocument *_feedDocument;	// 4 = 0x4
	NSDictionary *_feedDictionary;	// 8 = 0x8
	ATVFeedInterstitialGroupElement *_feedElement;	// 12 = 0xc
	NSArray *_interstitials;	// 16 = 0x10
	NSArray *_collapsedInterstitials;	// 20 = 0x14
	NSArray *_netTimeChapters;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSArray *collapsedInterstitials;	// G=0x1788ad; @synthesize=_collapsedInterstitials
@property(readonly, assign, nonatomic) NSDictionary *feedDictionary;	// G=0x17887d; @synthesize=_feedDictionary
@property(readonly, assign, nonatomic) ATVFeedInterstitialGroupElement *feedElement;	// G=0x17888d; @synthesize=_feedElement
@property(readonly, assign, nonatomic) NSArray *interstitials;	// G=0x17889d; @synthesize=_interstitials
@property(retain, nonatomic) NSArray *netTimeChapters;	// G=0x1788bd; S=0x1788cd; @synthesize=_netTimeChapters
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x178049
- (id)initWithFeedElement:(id)feedElement;	// 0x177c29
- (id)collapsedInterstitialForGrossTime:(double)grossTime;	// 0x178791
// declared property getter: - (id)collapsedInterstitials;	// 0x1788ad
- (void)dealloc;	// 0x178409
// declared property getter: - (id)feedDictionary;	// 0x17887d
// declared property getter: - (id)feedElement;	// 0x17888d
- (double)grossTimeForNetTime:(double)netTime;	// 0x178651
// declared property getter: - (id)interstitials;	// 0x17889d
// declared property getter: - (id)netTimeChapters;	// 0x1788bd
- (double)netTimeForGrossTime:(double)grossTime;	// 0x1784c1
// declared property setter: - (void)setNetTimeChapters:(id)chapters;	// 0x1788cd
@end
