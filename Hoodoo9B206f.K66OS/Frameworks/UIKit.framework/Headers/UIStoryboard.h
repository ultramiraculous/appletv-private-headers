/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSBundle, NSDictionary, NSString, NSMutableDictionary;

@interface UIStoryboard : NSObject {
@private
	NSBundle *bundle;	// 4 = 0x4
	NSString *relativePathFromBundle;	// 8 = 0x8
	NSDictionary *identifierToNibNameMap;	// 12 = 0xc
	NSString *designatedEntryPointIdentifier;	// 16 = 0x10
	NSMutableDictionary *identifierToUINibMap;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSBundle *bundle;	// G=0x3567eb91; @synthesize
@property(readonly, assign, nonatomic) NSString *designatedEntryPointIdentifier;	// G=0x3567ebc1; @synthesize
@property(readonly, assign, nonatomic) NSDictionary *identifierToNibNameMap;	// G=0x3567ebb1; @synthesize
@property(readonly, assign, nonatomic) NSMutableDictionary *identifierToUINibMap;	// G=0x3567ebd1; @synthesize
@property(readonly, assign, nonatomic) NSString *relativePathFromBundle;	// G=0x3567eba1; @synthesize
+ (id)storyboardWithName:(id)name bundle:(id)bundle;	// 0x3567e445
- (id)initWithBundle:(id)bundle relativePathFromBundle:(id)bundle2 identifierToNibNameMap:(id)nibNameMap designatedEntryPointIdentifier:(id)identifier;	// 0x3567e219
// declared property getter: - (id)bundle;	// 0x3567eb91
- (BOOL)containsNibNamed:(id)named;	// 0x3567e6d9
- (void)dealloc;	// 0x3567e17d
// declared property getter: - (id)designatedEntryPointIdentifier;	// 0x3567ebc1
// declared property getter: - (id)identifierToNibNameMap;	// 0x3567ebb1
// declared property getter: - (id)identifierToUINibMap;	// 0x3567ebd1
- (id)instantiateInitialViewController;	// 0x3567eb51
- (id)instantiateViewControllerWithIdentifier:(id)identifier;	// 0x3567e999
- (id)nibForStoryboardNibNamed:(id)storyboardNibNamed;	// 0x3567e745
- (id)nibForViewControllerWithIdentifier:(id)identifier;	// 0x3567e845
// declared property getter: - (id)relativePathFromBundle;	// 0x3567eba1
@end

