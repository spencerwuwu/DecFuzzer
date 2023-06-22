#ifndef s916retdec_H
#define s916retdec_H

#include "w2c2_base.h"

typedef struct s916retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s916retdecInstance;

void f0(s916retdecInstance*);

void f1(s916retdecInstance*);

U32 f2(s916retdecInstance*);

void f3(s916retdecInstance*,U32);

U32 f4(s916retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s916retdecInstance*,U32,U32,U32,U32,U32);

void f6(s916retdecInstance*,U32);

void f7(s916retdecInstance*,U32,U32,U32);

void f8(s916retdecInstance*,U32,U32,U32);

void s916retdec____wasm_call_ctors(s916retdecInstance*i);

void s916retdec____wasm_apply_data_relocs(s916retdecInstance*i);

U32 s916retdec_func_1(s916retdecInstance*i);

void s916retdec_call_cb(s916retdecInstance*i,U32 l0);

void s916retdecInstantiate(s916retdecInstance* instance, void* resolve(const char* module, const char* name));

void s916retdecFreeInstance(s916retdecInstance* instance);

#endif /* s916retdec_H */

