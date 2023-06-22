#ifndef s44retdec_H
#define s44retdec_H

#include "w2c2_base.h"

typedef struct s44retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s44retdecInstance;

void f0(s44retdecInstance*);

void f1(s44retdecInstance*);

U32 f2(s44retdecInstance*);

void f3(s44retdecInstance*,U32);

U32 f4(s44retdecInstance*,U32,U32,U32);

void f5(s44retdecInstance*,U32,U32,U32,U32,U32);

void f6(s44retdecInstance*,U32);

void f7(s44retdecInstance*,U32,U32,U32);

void f8(s44retdecInstance*,U32,U32,U32);

void s44retdec____wasm_call_ctors(s44retdecInstance*i);

void s44retdec____wasm_apply_data_relocs(s44retdecInstance*i);

U32 s44retdec_func_1(s44retdecInstance*i);

void s44retdec_call_cb(s44retdecInstance*i,U32 l0);

void s44retdecInstantiate(s44retdecInstance* instance, void* resolve(const char* module, const char* name));

void s44retdecFreeInstance(s44retdecInstance* instance);

#endif /* s44retdec_H */

