/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class VMUMachTaskContainer, NSMutableArray, NSString, NSArray;

@interface VMUSymbolicator : NSObject {
	NSMutableArray *_symbolOwners;	// 4 = 0x4
	NSArray *_symbolOwnerAddressRanges;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	VMUMachTaskContainer *_machTaskContainer;	// 16 = 0x10
	BOOL _isProtected;	// 20 = 0x14
}
@property(readonly, assign) BOOL isProtected;	// G=0x30bc0d01; converted property
@property(readonly, retain) NSString *path;	// G=0x30bc0cf1; converted property
@property(readonly, retain) NSMutableArray *symbolOwners;	// G=0x30bc0d9d; converted property
+ (id)convertHeaderToSymbolOwner:(id)symbolOwner allowLazySymbolOwners:(BOOL)owners;	// 0x30bc3c5d
+ (void)ignoreFunctionSymbols:(BOOL)symbols;	// 0x30bc3bf1
+ (BOOL)isIgnoreFunctionSymbols;	// 0x30bc3c01
+ (id)symbolicatorForMachTaskContainer:(id)machTaskContainer;	// 0x30bc0fed
+ (id)symbolicatorForPath:(id)path architecture:(id)architecture;	// 0x30bc0e95
+ (id)symbolicatorForPid:(int)pid;	// 0x30bc0fb1
+ (id)symbolicatorForSignature:(id)signature;	// 0x30bc105d
+ (id)symbolicatorForSignature:(id)signature dsymSearchPaths:(id)paths useMds:(BOOL)mds;	// 0x30bc41bd
+ (id)symbolicatorForTask:(unsigned)task;	// 0x30bc0f75
+ (id)symbolicatorWithHeaders:(id)headers allowLazySymbolOwners:(BOOL)owners path:(id)path machTaskContainer:(id)container;	// 0x30bc3d05
+ (id)symbolicatorWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x30bc3e4d
+ (id)symbolicatorsForPath:(id)path;	// 0x30bc1555
- (id)initWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x30bc3e95
- (BOOL)addSymbolRichFile:(id)file;	// 0x30bc1219
- (id)architecture;	// 0x30bc1865
- (BOOL)containsAddress:(unsigned long long)address;	// 0x30bc0d11
- (void)dealloc;	// 0x30bc17b9
- (id)description;	// 0x30bc0de5
- (id)faultLazySymbolOwnerAtIndex:(int)index;	// 0x30bc39a5
- (void)forceFullSymbolExtraction;	// 0x30bc1961
// converted property getter: - (BOOL)isProtected;	// 0x30bc0d01
// converted property getter: - (id)path;	// 0x30bc0cf1
- (int)pid;	// 0x30bc0dc5
- (id)programTextForAddress:(unsigned long long)address;	// 0x30bc3c11
- (id)programTextForAddressRange:(VMURange)addressRange;	// 0x30bc40c9
- (id)regionForAddress:(unsigned long long)address;	// 0x30bc33a1
- (id)regions;	// 0x30bc34e9
- (id)regionsForName:(id)name;	// 0x30bc2fd1
- (id)regionsInAddressRange:(VMURange)addressRange;	// 0x30bc316d
- (void)replaceSymbolOwner:(id)owner withSymbolOwner:(id)symbolOwner;	// 0x30bc367d
- (id)signature;	// 0x30bc1a89
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x30bc2d41
- (id)sourceInfos;	// 0x30bc203d
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x30bc1ce5
- (id)symbolForAddress:(unsigned long long)address;	// 0x30bc2e89
- (id)symbolOwnerForAddress:(unsigned long long)address;	// 0x30bc0d31
- (id)symbolOwnerForName:(id)name;	// 0x30bc0d59
- (id)symbolOwnerForPath:(id)path;	// 0x30bc232d
// converted property getter: - (id)symbolOwners;	// 0x30bc0d9d
- (id)symbolOwnersForName:(id)name;	// 0x30bc2651
- (id)symbolOwnersInAddressRange:(VMURange)addressRange;	// 0x30bc2b05
- (id)symbolOwnersWithFlags:(unsigned)flags;	// 0x30bc24b9
- (id)symbols;	// 0x30bc21b5
- (id)symbolsForMangledName:(id)mangledName;	// 0x30bc280d
- (id)symbolsForName:(id)name;	// 0x30bc2989
- (id)symbolsInAddressRange:(VMURange)addressRange;	// 0x30bc1e91
@end
