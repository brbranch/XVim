//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double _field1;
    double _field2;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
// UUID: 15DC476D-C9C4-3028-ACB6-7721038EF9C0
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 2369.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface DCIMAVMetadataUtilities : NSObject
{
}

+ (id)_captureModeStringFromAssetTrack:(id)arg1;
+ (id)_captureModeStringFromAsset:(id)arg1;
+ (_Bool)isTimelapseAsset:(id)arg1;
+ (id)metadataItemForTimelapse;

@end

@interface DCIMAssetFormats : NSObject
{
}

+ (long long)masterThumbnailFormat;
+ (long long)wildcatStackFormat;
+ (long long)thumbnailFormat;
+ (_Bool)formatSizeIsShortSide:(long long)arg1;
+ (struct CGSize)scaledSizeForSize:(struct CGSize)arg1 format:(long long)arg2 capLength:(_Bool)arg3;
+ (struct CGSize)sizeForFormat:(long long)arg1;

@end

@interface DCIMDirectoryUtilities : NSObject
{
}

+ (id)photoDCIMDirectory;
+ (id)photoDCIMDirectoryURL;
+ (id)photoDataMiscDirectory;
+ (id)photoDataCPLDirectory;
+ (id)photoDataDirectory;
+ (id)photoDataDirectoryURL;

@end

@interface DCIMImageUtilities : NSObject
{
}

+ (_Bool)generateThumbnailsFromJPEGData:(id)arg1 inputSize:(struct CGSize)arg2 preCropLargeThumbnailSize:(struct CGSize)arg3 postCropLargeThumbnailSize:(struct CGSize)arg4 preCropSmallThumbnailSize:(struct CGSize)arg5 postCropSmallThumbnailSize:(struct CGSize)arg6 outSmallThumbnailImageRef:(struct CGImage **)arg7 outLargeThumbnailImageRef:(struct CGImage **)arg8 outLargeThumbnailJPEGData:(id *)arg9 generateFiltersBlock:(CDUnknownBlockType)arg10;

@end

@interface DCIMImageWellUtilities : NSObject
{
}

+ (id)cameraPreviewWellImage;
+ (id)cameraPreviewWellImageFileURL;

@end

@interface DCIMImageWriter : NSObject
{
}

+ (id)avalanchePathExtension;
+ (id)diagnosticPathExtension;
+ (id)largeThumbnailInflightPathExtension;
+ (id)incomingAssetFilenameDelimiter;
+ (id)defaultFileExtensionForAssetType:(short)arg1;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)arg1 andExtension:(id)arg2 isPhotoStream:(_Bool)arg3;
+ (id)incomingDirectoryPathForPhotoStream;
+ (id)incomingDirectoryPath;
+ (void)writeableDataForImage:(id)arg1 previewImage:(id)arg2 imageData:(id)arg3 imageUTIType:(struct __CFString *)arg4 exifProperties:(id)arg5 imageRefOut:(struct CGImage **)arg6 lowResImageRefOut:(struct CGImage **)arg7 thumbnailDataOut:(id *)arg8 imageUTITypeOut:(const struct __CFString **)arg9 exifPropertiesOut:(id *)arg10 isJPEGOut:(_Bool *)arg11 imageDataOut:(id *)arg12 imageOrientation:(long long)arg13;
+ (id)sharedDCIMWriter;
- (void)_writeJPEGToPath:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(_Bool)arg5;
- (id)_cameraAssetExtensionForType:(short)arg1;
- (_Bool)saveImageJobToDisk:(id)arg1;

@end

@interface DCIMLocationUtilities : NSObject
{
}

+ (id)locationFromImageProperties:(id)arg1 timestampIfMissing:(id)arg2;
+ (id)locationFromImageProperties:(id)arg1;
+ (id)_sharedGPSDateAndTimestampFormatter;

@end

@interface DCIMSlalomUtilities : NSObject
{
}

+ (_Bool)writeRegions:(id)arg1 toPath:(id)arg2;
+ (id)regionsFromPlist:(id)arg1;
+ (id)plistFromRegions:(id)arg1;

@end

@interface NSFileManager (DCIMExtensions)
- (id)makeUniqueDirectoryWithPath:(id)arg1;
@end

@interface PLIOSurfaceData : NSData
{
}

@end

