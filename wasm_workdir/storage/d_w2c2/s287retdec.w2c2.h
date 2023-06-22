#ifndef s287retdec_H
#define s287retdec_H

#include "w2c2_base.h"

typedef struct s287retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s287retdecInstance;

void f0(s287retdecInstance*);

void f1(s287retdecInstance*);

U32 f2(s287retdecInstance*);

void f3(s287retdecInstance*,U32);

U32 f4(s287retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s287retdecInstance*,U32,U32,U32,U32,U32);

void f6(s287retdecInstance*,U32);

void f7(s287retdecInstance*,U32,U32,U32);

void f8(s287retdecInstance*,U32,U32,U32);

void s287retdec____wasm_call_ctors(s287retdecInstance*i);

void s287retdec____wasm_apply_data_relocs(s287retdecInstance*i);

U32 s287retdec_func_1(s287retdecInstance*i);

void s287retdec_call_cb(s287retdecInstance*i,U32 l0);

void s287retdecInstantiate(s287retdecInstance* instance, void* resolve(const char* module, const char* name));

void s287retdecFreeInstance(s287retdecInstance* instance);

#endif /* s287retdec_H */

