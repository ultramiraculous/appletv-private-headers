/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVVersionInfo : XXUnknownSuperclass {
}
+ (int)compare3PartVersion:(id)version with3PartVersion:(id)a3PartVersion;	// 0x256ca1
+ (int)compareEFIVersion:(id)version withEFIVersion:(id)efiversion;	// 0x256f61
+ (int)compareIRVersion:(id)version withIRVersion:(id)irversion;	// 0x256fd9
+ (int)compareOSVersion:(id)version andBuild:(id)build withOSVersion:(id)osversion andBuild:(id)build4;	// 0x256e39
+ (int)compareSIVersion:(id)version withSIVersion:(id)siversion;	// 0x25712d
+ (id)currentEFIVersion;	// 0x256ee5
+ (id)currentIRVersion;	// 0x256fa5
+ (id)currentOSBuildVersion;	// 0x256c79
+ (id)currentOSVersion;	// 0x256c51
+ (id)currentSIBootVersion;	// 0x2570fd
+ (id)currentSIMainVersion;	// 0x2570f1
+ (BOOL)isSIFirmwareValid;	// 0x257129
@end
