#ifndef s846r2_H
#define s846r2_H

#include "w2c2_base.h"

typedef struct s846r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s846r2Instance;

void f0(s846r2Instance*);

void f1(s846r2Instance*);

U32 f2(s846r2Instance*);

void f3(s846r2Instance*,U32);

U32 f4(s846r2Instance*,U32,U32,U32);

void f5(s846r2Instance*,U32,U32,U32,U32,U32);

void f6(s846r2Instance*,U32);

void f7(s846r2Instance*,U32,U32,U32);

void f8(s846r2Instance*,U32,U32,U32);

void s846r2____wasm_call_ctors(s846r2Instance*i);

void s846r2____wasm_apply_data_relocs(s846r2Instance*i);

U32 s846r2_func_1(s846r2Instance*i);

void s846r2_call_cb(s846r2Instance*i,U32 l0);

void s846r2Instantiate(s846r2Instance* instance, void* resolve(const char* module, const char* name));

void s846r2FreeInstance(s846r2Instance* instance);

#endif /* s846r2_H */

