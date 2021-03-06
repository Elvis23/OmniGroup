// Copyright 2015-2017 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniFoundation/OFByteProviderProtocol.h>
#import <Foundation/NSObject.h>

@interface OFSFileByteAcceptor : NSObject <OFByteProvider, OFByteAcceptor>

- (instancetype)initWithFileDescriptor:(int)fd closeOnDealloc:(BOOL)closeopt;

// Redeclared from OFByteAcceptor to make them non-@optional
- (NSError *)error;
- (void)flushByteAcceptor;

@end

