#ifndef s239retdec_H
#define s239retdec_H

#include "w2c2_base.h"

typedef struct s239retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s239retdecInstance;

void f0(s239retdecInstance*);

void f1(s239retdecInstance*);

U32 f2(s239retdecInstance*);

void f3(s239retdecInstance*,U32);

U32 f4(s239retdecInstance*,U32,U32,U32);

void f5(s239retdecInstance*,U32,U32,U32,U32,U32);

void f6(s239retdecInstance*,U32);

void f7(s239retdecInstance*,U32,U32,U32);

void f8(s239retdecInstance*,U32,U32,U32);

void s239retdec____wasm_call_ctors(s239retdecInstance*i);

void s239retdec____wasm_apply_data_relocs(s239retdecInstance*i);

U32 s239retdec_func_1(s239retdecInstance*i);

void s239retdec_call_cb(s239retdecInstance*i,U32 l0);

void s239retdecInstantiate(s239retdecInstance* instance, void* resolve(const char* module, const char* name));

void s239retdecFreeInstance(s239retdecInstance* instance);

#endif /* s239retdec_H */

