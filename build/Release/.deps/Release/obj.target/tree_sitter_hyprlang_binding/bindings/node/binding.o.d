cmd_Release/obj.target/tree_sitter_hyprlang_binding/bindings/node/binding.o := g++ -o Release/obj.target/tree_sitter_hyprlang_binding/bindings/node/binding.o ../bindings/node/binding.cc '-DNODE_GYP_MODULE_NAME=tree_sitter_hyprlang_binding' '-DUSING_UV_SHARED=1' '-DUSING_V8_SHARED=1' '-DV8_DEPRECATION_WARNINGS=1' '-DV8_DEPRECATION_WARNINGS' '-DV8_IMMINENT_DEPRECATION_WARNINGS' '-D_GLIBCXX_USE_CXX11_ABI=1' '-D_LARGEFILE_SOURCE' '-D_FILE_OFFSET_BITS=64' '-D__STDC_FORMAT_MACROS' '-DOPENSSL_NO_PINSHARED' '-DOPENSSL_THREADS' '-DBUILDING_NODE_EXTENSION' -I/home/luckas/.cache/node-gyp/18.16.0/include/node -I/home/luckas/.cache/node-gyp/18.16.0/src -I/home/luckas/.cache/node-gyp/18.16.0/deps/openssl/config -I/home/luckas/.cache/node-gyp/18.16.0/deps/openssl/openssl/include -I/home/luckas/.cache/node-gyp/18.16.0/deps/uv/include -I/home/luckas/.cache/node-gyp/18.16.0/deps/zlib -I/home/luckas/.cache/node-gyp/18.16.0/deps/v8/include -I../node_modules/nan -I../src  -fPIC -pthread -Wall -Wextra -Wno-unused-parameter -m64 -O3 -fno-omit-frame-pointer -fno-rtti -fno-exceptions -std=gnu++17 -MMD -MF ./Release/.deps/Release/obj.target/tree_sitter_hyprlang_binding/bindings/node/binding.o.d.raw   -c
Release/obj.target/tree_sitter_hyprlang_binding/bindings/node/binding.o: \
 ../bindings/node/binding.cc ../src/tree_sitter/parser.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/node.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/cppgc/common.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8config.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-array-buffer.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-local-handle.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-internal.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-version.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8config.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-object.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-maybe.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-persistent-handle.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-weak-callback-info.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-primitive.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-data.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-value.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-traced-handle.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-container.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-context.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-snapshot.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-date.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-debug.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-script.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-message.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-exception.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-extension.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-external.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-function.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-function-callback.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-template.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-memory-span.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-initialization.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-callbacks.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-isolate.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-embedder-heap.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-microtask.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-statistics.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-promise.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-unwinder.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-embedder-state-scope.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-platform.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-json.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-locker.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-microtask-queue.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-primitive-object.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-proxy.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-regexp.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-typed-array.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-value-serializer.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/v8-wasm.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/node_version.h \
 ../node_modules/nan/nan.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/node_version.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/uv.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/uv/errno.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/uv/version.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/uv/unix.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/uv/threadpool.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/uv/linux.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/node_buffer.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/node.h \
 /home/luckas/.cache/node-gyp/18.16.0/include/node/node_object_wrap.h \
 ../node_modules/nan/nan_callbacks.h \
 ../node_modules/nan/nan_callbacks_12_inl.h \
 ../node_modules/nan/nan_maybe_43_inl.h \
 ../node_modules/nan/nan_converters.h \
 ../node_modules/nan/nan_converters_43_inl.h \
 ../node_modules/nan/nan_new.h \
 ../node_modules/nan/nan_implementation_12_inl.h \
 ../node_modules/nan/nan_persistent_12_inl.h \
 ../node_modules/nan/nan_weak.h ../node_modules/nan/nan_object_wrap.h \
 ../node_modules/nan/nan_private.h \
 ../node_modules/nan/nan_typedarray_contents.h \
 ../node_modules/nan/nan_json.h ../node_modules/nan/nan_scriptorigin.h
../bindings/node/binding.cc:
../src/tree_sitter/parser.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/node.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/cppgc/common.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8config.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-array-buffer.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-local-handle.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-internal.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-version.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8config.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-object.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-maybe.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-persistent-handle.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-weak-callback-info.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-primitive.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-data.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-value.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-traced-handle.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-container.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-context.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-snapshot.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-date.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-debug.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-script.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-message.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-exception.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-extension.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-external.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-function.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-function-callback.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-template.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-memory-span.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-initialization.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-callbacks.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-isolate.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-embedder-heap.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-microtask.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-statistics.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-promise.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-unwinder.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-embedder-state-scope.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-platform.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-json.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-locker.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-microtask-queue.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-primitive-object.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-proxy.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-regexp.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-typed-array.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-value-serializer.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/v8-wasm.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/node_version.h:
../node_modules/nan/nan.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/node_version.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/uv.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/uv/errno.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/uv/version.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/uv/unix.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/uv/threadpool.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/uv/linux.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/node_buffer.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/node.h:
/home/luckas/.cache/node-gyp/18.16.0/include/node/node_object_wrap.h:
../node_modules/nan/nan_callbacks.h:
../node_modules/nan/nan_callbacks_12_inl.h:
../node_modules/nan/nan_maybe_43_inl.h:
../node_modules/nan/nan_converters.h:
../node_modules/nan/nan_converters_43_inl.h:
../node_modules/nan/nan_new.h:
../node_modules/nan/nan_implementation_12_inl.h:
../node_modules/nan/nan_persistent_12_inl.h:
../node_modules/nan/nan_weak.h:
../node_modules/nan/nan_object_wrap.h:
../node_modules/nan/nan_private.h:
../node_modules/nan/nan_typedarray_contents.h:
../node_modules/nan/nan_json.h:
../node_modules/nan/nan_scriptorigin.h:
