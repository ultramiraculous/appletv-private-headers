/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, EDReference;

@interface EDHyperlink : NSObject {
	EDString *mPath;	// 4 = 0x4
	EDString *mDosPath;	// 8 = 0x8
	EDString *mDescriptionText;	// 12 = 0xc
	EDString *mTextMark;	// 16 = 0x10
	EDString *mToolTip;	// 20 = 0x14
	EDReference *mReference;	// 24 = 0x18
	int mType;	// 28 = 0x1c
}
@property(retain) id descriptionText;	// G=0x35083525; S=0x35083535; converted property
@property(retain) id dosPath;	// G=0x350834d1; S=0x350834e1; converted property
@property(retain) id path;	// G=0x3508347d; S=0x3508348d; converted property
@property(retain) id reference;	// G=0x35083621; S=0x35083631; converted property
@property(retain) id textMark;	// G=0x35083579; S=0x35083589; converted property
@property(retain) id toolTip;	// G=0x350835cd; S=0x350835dd; converted property
@property(assign) int type;	// G=0x35083675; S=0x35083685; converted property
+ (id)hyperlink;	// 0x35083381
- (void)dealloc;	// 0x350833c9
// converted property getter: - (id)descriptionText;	// 0x35083525
// converted property getter: - (id)dosPath;	// 0x350834d1
// converted property getter: - (id)path;	// 0x3508347d
// converted property getter: - (id)reference;	// 0x35083621
// converted property setter: - (void)setDescriptionText:(id)text;	// 0x35083535
// converted property setter: - (void)setDosPath:(id)path;	// 0x350834e1
// converted property setter: - (void)setPath:(id)path;	// 0x3508348d
// converted property setter: - (void)setReference:(id)reference;	// 0x35083631
// converted property setter: - (void)setTextMark:(id)mark;	// 0x35083589
// converted property setter: - (void)setToolTip:(id)tip;	// 0x350835dd
// converted property setter: - (void)setType:(int)type;	// 0x35083685
// converted property getter: - (id)textMark;	// 0x35083579
// converted property getter: - (id)toolTip;	// 0x350835cd
// converted property getter: - (int)type;	// 0x35083675
@end
