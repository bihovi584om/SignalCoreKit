//
//  Copyright (c) 2018 Open Whisper Systems. All rights reserved.
//

#import <Foundation/Foundation.h>

//@import CocoaLumberjack;
#import <CocoaLumberjack/CocoaLumberjack.h>

#ifdef DEBUG
static const NSUInteger ddLogLevel = DDLogLevelAll;
#else
static const NSUInteger ddLogLevel = DDLogLevelInfo;
#endif
#import "NSObject+OWS.h"
#import "OWSAsserts.h"
