#ifndef s256retdec_H
#define s256retdec_H

#include "w2c2_base.h"

typedef struct s256retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s256retdecInstance;

void f0(s256retdecInstance*);

void f1(s256retdecInstance*);

U32 f2(s256retdecInstance*);

void f3(s256retdecInstance*,U32);

U32 f4(s256retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s256retdecInstance*,U32,U32,U32,U32,U32);

void f6(s256retdecInstance*,U32);

void f7(s256retdecInstance*,U32,U32,U32);

void f8(s256retdecInstance*,U32,U32,U32);

void s256retdec____wasm_call_ctors(s256retdecInstance*i);

void s256retdec____wasm_apply_data_relocs(s256retdecInstance*i);

U32 s256retdec_func_1(s256retdecInstance*i);

void s256retdec_call_cb(s256retdecInstance*i,U32 l0);

void s256retdecInstantiate(s256retdecInstance* instance, void* resolve(const char* module, const char* name));

void s256retdecFreeInstance(s256retdecInstance* instance);

#endif /* s256retdec_H */

