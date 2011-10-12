/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage, NSString, NSURL, NSArray, UIColor;

@interface UIPasteboard : NSObject {
@private
	NSString *_name;	// 4 = 0x4
}
@property(copy, nonatomic) NSURL *URL;	// G=0x302ce5bd; S=0x302ce57d; 
@property(copy, nonatomic) NSArray *URLs;	// G=0x302ce705; S=0x302ce5f9; 
@property(readonly, assign, nonatomic) int changeCount;	// G=0x302ce1a9; 
@property(copy, nonatomic) UIColor *color;	// G=0x302ceb8d; S=0x302ceb4d; 
@property(copy, nonatomic) NSArray *colors;	// G=0x302cecd5; S=0x302cebc9; 
@property(copy, nonatomic) UIImage *image;	// G=0x302ce785; S=0x302ce745; 
@property(copy, nonatomic) NSArray *images;	// G=0x302ce999; S=0x302ce88d; 
@property(copy, nonatomic) NSArray *items;	// G=0x302ce1bd; S=0x302ce335; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x302cd625; 
@property(readonly, assign, nonatomic) int numberOfItems;	// G=0x30145a8d; 
@property(assign, nonatomic, getter=isPersistent) BOOL persistent;	// G=0x302ce179; S=0x302ce195; 
@property(copy, nonatomic) NSString *string;	// G=0x302ce3f5; S=0x302ce3b5; 
@property(copy, nonatomic) NSArray *strings;	// G=0x302ce53d; S=0x302ce431; 
+ (id)_findPasteboard;	// 0x302ced15
+ (id)_printPasteboard;	// 0x302ced6d
+ (id)generalPasteboard;	// 0x301267c1
+ (id)pasteboardWithName:(id)name create:(BOOL)create;	// 0x302cd265
+ (id)pasteboardWithUniqueName;	// 0x302cd3e1
+ (void)removePasteboardWithName:(id)name;	// 0x302cd4c5
- (id)init;	// 0x302cd549
// declared property getter: - (id)URL;	// 0x302ce5bd
// declared property getter: - (id)URLs;	// 0x302ce705
- (id)_initWithName:(id)name system:(BOOL)system create:(BOOL)create;	// 0x30126819
- (void)_pasteboardChanged:(id)changed;	// 0x302cedc5
- (void)addItems:(id)items;	// 0x302cdfa9
// declared property getter: - (int)changeCount;	// 0x302ce1a9
// declared property getter: - (id)color;	// 0x302ceb8d
// declared property getter: - (id)colors;	// 0x302cecd5
- (BOOL)containsPasteboardTypes:(id)types;	// 0x30126c11
- (BOOL)containsPasteboardTypes:(id)types inItemSet:(id)itemSet;	// 0x30145bd9
- (id)dataForPasteboardType:(id)pasteboardType;	// 0x302cd689
- (id)dataForPasteboardType:(id)pasteboardType inItemSet:(id)itemSet;	// 0x302cdea1
- (void)dealloc;	// 0x302cd5c5
// declared property getter: - (id)image;	// 0x302ce785
// declared property getter: - (id)images;	// 0x302ce999
// declared property getter: - (BOOL)isPersistent;	// 0x302ce179
- (id)itemSetWithPasteboardTypes:(id)pasteboardTypes;	// 0x302cdd09
// declared property getter: - (id)items;	// 0x302ce1bd
// declared property getter: - (id)name;	// 0x302cd625
// declared property getter: - (int)numberOfItems;	// 0x30145a8d
- (id)pasteboardTypes;	// 0x302cd65d
- (id)pasteboardTypesForItemSet:(id)itemSet;	// 0x302cdc29
// declared property setter: - (void)setColor:(id)color;	// 0x302ceb4d
// declared property setter: - (void)setColors:(id)colors;	// 0x302cebc9
- (void)setData:(id)data forPasteboardType:(id)pasteboardType;	// 0x302cdb95
// declared property setter: - (void)setImage:(id)image;	// 0x302ce745
// declared property setter: - (void)setImages:(id)images;	// 0x302ce88d
// declared property setter: - (void)setItems:(id)items;	// 0x302ce335
// declared property setter: - (void)setPersistent:(BOOL)persistent;	// 0x302ce195
// declared property setter: - (void)setString:(id)string;	// 0x302ce3b5
// declared property setter: - (void)setStrings:(id)strings;	// 0x302ce431
// declared property setter: - (void)setURL:(id)url;	// 0x302ce57d
// declared property setter: - (void)setURLs:(id)urls;	// 0x302ce5f9
- (void)setValue:(id)value forPasteboardType:(id)pasteboardType;	// 0x302cd985
// declared property getter: - (id)string;	// 0x302ce3f5
// declared property getter: - (id)strings;	// 0x302ce53d
- (id)valueForPasteboardType:(id)pasteboardType;	// 0x302cd6b5
- (id)valuesForPasteboardType:(id)pasteboardType inItemSet:(id)itemSet;	// 0x302cdd9d
@end

